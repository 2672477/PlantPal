#include "smart_alert_manager.h"

constexpr uint8_t PRIORITY_NONE = 0;
constexpr uint8_t PRIORITY_LOW = 1;
constexpr uint8_t PRIORITY_MEDIUM = 2;
constexpr uint8_t PRIORITY_HIGH = 3;
constexpr uint8_t PRIORITY_CRITICAL = 4;

constexpr unsigned long MINUTE = 60000UL;

constexpr unsigned long LOW_REMINDER = 6UL * 60UL * MINUTE;
constexpr unsigned long MEDIUM_REMINDER = 60UL * MINUTE;
constexpr unsigned long HIGH_REMINDER = 15UL * MINUTE;
constexpr unsigned long CRITICAL_REMINDER = 5UL * MINUTE;

static bool sensorFailureDetected(
    const SensorSystemStatus& sensors
)
{
    return (
        sensors.moisture.status != SENSOR_OK ||
        sensors.sunlight.status != SENSOR_OK ||
        sensors.temperature.status != SENSOR_OK
    );
}

static AlertSeverity calculateSeverity(
    float currentHealth,
    const StressResult& stress,
    const TrendClassification& classification,
    const TrendPrediction& prediction,
    const TrendPredictionConfidence& predictionConfidence,
    const EnvironmentalStability& environment,
    const SensorSystemStatus& sensors,
    const HealthConfidence& healthConfidence
)
{
    if (sensorFailureDetected(sensors))
    {
        return ALERT_CRITICAL;
    }

    if (
        currentHealth < 25.0f ||
        classification.trend == TREND_CRITICAL_DECLINE
    )
    {
        return ALERT_CRITICAL;
    }

    if (
        prediction.predictedHealth < 40.0f &&
        predictionConfidence.reliablePrediction
    )
    {
        return ALERT_HIGH;
    }

    if (
        stress.level == HIGH_STRESS ||
        stress.level == EXTREME_STRESS
    )
    {
        return ALERT_HIGH;
    }

    if (
        !environment.stable ||
        environment.stabilityScore < 60.0f
    )
    {
        return ALERT_MEDIUM;
    }

    if (
        healthConfidence.overallConfidence < 60.0f ||
        !predictionConfidence.reliablePrediction
    )
    {
        return ALERT_LOW;
    }

    return ALERT_NONE;
}

static uint8_t calculatePriority(
    AlertSeverity severity
)
{
    switch (severity)
    {
        case ALERT_LOW:
            return PRIORITY_LOW;

        case ALERT_MEDIUM:
            return PRIORITY_MEDIUM;

        case ALERT_HIGH:
            return PRIORITY_HIGH;

        case ALERT_CRITICAL:
            return PRIORITY_CRITICAL;

        default:
            return PRIORITY_NONE;
    }
}

static AlertReason determinePrimaryReason(
    float currentHealth,
    const StressResult& stress,
    const TrendClassification& classification,
    const TrendPrediction& prediction,
    const TrendPredictionConfidence& predictionConfidence,
    const EnvironmentalStability& environment,
    const HealthConfidence& healthConfidence,
    const SensorSystemStatus& sensors
)
{
    if (sensorFailureDetected(sensors))
    {
        return ALERT_SENSOR_FAILURE;
    }

    if (currentHealth < 25.0f)
    {
        return ALERT_LOW_HEALTH;
    }

    if (classification.trend == TREND_CRITICAL_DECLINE)
    {
        return ALERT_RAPID_DECLINE;
    }

    if (
        stress.level == HIGH_STRESS ||
        stress.level == EXTREME_STRESS
    )
    {
        return ALERT_HIGH_STRESS;
    }

    if (
        predictionConfidence.reliablePrediction &&
        prediction.predictedHealth < currentHealth &&
        prediction.predictedHealth < 50.0f
    )
    {
        return ALERT_PREDICTIVE_WARNING;
    }

    if (!environment.stable)
    {
        return ALERT_POOR_ENVIRONMENT;
    }

    if (healthConfidence.overallConfidence < 60.0f)
    {
        return ALERT_LOW_CONFIDENCE;
    }

    return ALERT_NO_REASON;
}

static AlertReason determineSecondaryReason(
    AlertReason primary,
    const StressResult& stress,
    const EnvironmentalStability& environment,
    const HealthConfidence& healthConfidence
)
{
    if (
        primary != ALERT_HIGH_STRESS &&
        (
            stress.level == HIGH_STRESS ||
            stress.level == EXTREME_STRESS
        )
    )
    {
        return ALERT_HIGH_STRESS;
    }

    if (
        primary != ALERT_POOR_ENVIRONMENT &&
        !environment.stable
    )
    {
        return ALERT_POOR_ENVIRONMENT;
    }

    if (
        primary != ALERT_LOW_CONFIDENCE &&
        healthConfidence.overallConfidence < 60.0f
    )
    {
        return ALERT_LOW_CONFIDENCE;
    }

    return ALERT_NO_REASON;
}
static unsigned long calculateReminderInterval(
    AlertSeverity severity,
    const TrendClassification& classification
)
{
    unsigned long reminder = 0;

    switch (severity)
    {
        case ALERT_LOW:
            reminder = LOW_REMINDER;
            break;

        case ALERT_MEDIUM:
            reminder = MEDIUM_REMINDER;
            break;

        case ALERT_HIGH:
            reminder = HIGH_REMINDER;
            break;

        case ALERT_CRITICAL:
            reminder = CRITICAL_REMINDER;
            break;

        default:
            return 0;
    }

    switch (classification.trend)
    {
        case TREND_THRIVING:
            return 0;

        case TREND_RECOVERING:
            reminder *= 2;
            break;

        case TREND_STABLE:
            break;

        case TREND_STRESSED:
            reminder = static_cast<unsigned long>(reminder * 0.75f);
            break;

        case TREND_CRITICAL_DECLINE:
            reminder = static_cast<unsigned long>(reminder * 0.50f);
            break;
    }

    return reminder;
}

SmartAlert generateAlert(
    float currentHealth,
    const StressResult& stress,
    const TrendClassification& classification,
    const TrendPrediction& prediction,
    const TrendPredictionConfidence& predictionConfidence,
    const EnvironmentalStability& environment,
    const HealthConfidence& healthConfidence,
    const SensorSystemStatus& sensors,
    unsigned long currentTime
)
{
    SmartAlert result{};

    result.shouldAlert = false;
    result.severity = ALERT_NONE;
    result.priority = PRIORITY_NONE;
    result.primaryReason = ALERT_NO_REASON;
    result.secondaryReason = ALERT_NO_REASON;
    result.reminderInterval = 0;
    result.nextReminder = 0;
    result.predictive = false;

    result.severity = calculateSeverity(
        currentHealth,
        stress,
        classification,
        prediction,
        predictionConfidence,
        environment,
        sensors,
        healthConfidence
    );

    result.priority = calculatePriority(result.severity);

    result.primaryReason = determinePrimaryReason(
        currentHealth,
        stress,
        classification,
        prediction,
        predictionConfidence,
        environment,
        healthConfidence,
        sensors
    );

    result.secondaryReason = determineSecondaryReason(
        result.primaryReason,
        stress,
        environment,
        healthConfidence
    );

    result.reminderInterval = calculateReminderInterval(
        result.severity,
        classification
    );

    result.predictive =
        predictionConfidence.reliablePrediction &&
        prediction.predictedHealth < currentHealth &&
        prediction.predictedHealth < 50.0f;

    result.shouldAlert =
        (result.severity != ALERT_NONE) ||
        result.predictive;

    if (
        currentHealth >= 95.0f &&
        stress.level == NO_STRESS &&
        environment.stable &&
        healthConfidence.overallConfidence >= 90.0f
    )
    {
        result.shouldAlert = false;
        result.severity = ALERT_NONE;
        result.priority = PRIORITY_NONE;
        result.primaryReason = ALERT_NO_REASON;
        result.secondaryReason = ALERT_NO_REASON;
        result.predictive = false;
        result.reminderInterval = 0;
        result.nextReminder = 0;

        return result;
    }

    if (
        result.shouldAlert &&
        result.reminderInterval > 0
    )
    {
        result.nextReminder =
            currentTime +
            result.reminderInterval;
    }

    if (
        result.primaryReason == ALERT_NO_REASON &&
        result.severity != ALERT_NONE
    )
    {
        result.primaryReason = ALERT_LOW_HEALTH;
    }

    return result;
}