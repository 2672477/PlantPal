#include "water_recommendation.h"

static float clamp(
    float value
)
{
    if (value < 0.0f) {
        return 0.0f;
    }

    if (value > 100.0f) {
        return 100.0f;
    }

    return value;
}

static float calculateUrgency(
    float moistureScore,
    float currentHealth,
    const StressResult& stress,
    const TrendPrediction& prediction
)
{
    float urgency = 0.0f;
    urgency += (100.0f - moistureScore) * 0.50f;
    urgency += (100.0f - currentHealth) * 0.50f;
    urgency += stress.stressIndex * 0.15f;

    if (prediction.predictedHealth > currentHealth) {
        urgency += 10.0f;
    }

    return clamp(urgency);
}

static float calculateAmount(
    float urgency,
    const EnvironmentalStability& environment
)
{
    float amount = urgency;

    if (!environment.stable) {
        amount *= 0.85f;
    }

    return clamp(amount);
}

static bool detectOverwateringRisk(
    float moistureScore
)
{
    return moistureScore > 85.0f;
}

static bool detectUnderwateringRisk(
    float moistureScore
)
{
    return moistureScore < 30.0f ;
}

static bool shouldWaterNow(
    float urgency,
    bool overwaterRisk,
    bool waitForRecovery
)
{
    if (overwaterRisk) {
        return false;
    }

    if (waitForRecovery) {
        return false;
    }

    return urgency >= 60.0f;
}

WaterRecommendation generateWaterRecommendation(
    float currentHealth,
    float moistureScore,

    const PlantProfile& profile,
    const StressResult& stress,
    const TrendPrediction& prediction,
    const EnvironmentalStability& environment
)
{
    WaterRecommendation result {};

    result.overwaterRisk = detectOverwateringRisk(moistureScore);

    result.underwaterRisk = detectUnderwateringRisk(moistureScore);

    result.waitForRecovery = (prediction.predictedHealth > currentHealth && environment.stable);

    result.urgency = calculateUrgency(moistureScore, currentHealth, stress, prediction);

    result.recommendationAmount = calculateAmount(result.urgency, environment);

    result.waterNow = shouldWaterNow(result.urgency, result.overwaterRisk, result.waitForRecovery);

    (void)profile;

    return result;
}
