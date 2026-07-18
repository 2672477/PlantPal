#include "trend_prediction.h"

constexpr float MIN_HEALTH = 0.0f;
constexpr float MAX_HEALTH = 100.0f;

constexpr float SLOPE_WEIGHT = 0.35f;
constexpr float MOVING_AVERAGE_WEIGHT = 0.20f;
constexpr float WEIGHTED_AVERAGE_WEIGHT = 0.25f;
constexpr float RECOVERY_WEIGHT = 0.20f;

constexpr float IMPROVING_BONUS = 2.0f;
constexpr float STABLE_BONUS = 0.5f;
constexpr float DECLINING_PENALTY = 2.0f;
constexpr float RAPID_DECLINE_PENALTY = 5.0f;

static float clamp(float value) {
    if (value < MIN_HEALTH) {
        return MIN_HEALTH;
    }

    if (value > MAX_HEALTH) {
        return MAX_HEALTH;
    }

    return value;
}

TrendPrediction predictTrend(
    float currentHealth,
    const HealthConfidence& confidence,
    const RecoveryResult& recovery
)
{
    TrendPrediction prediction{};

    float movingAverage = calculateMovingAverage();
    float weightedAverage = calculateWeightedAverage();
    float trendSlope = calculateTrendSlope();
    TrendState trend = getTrendState();

    float predicted = currentHealth;
    
    predicted += trendSlope * SLOPE_WEIGHT;
    predicted +=  (movingAverage - currentHealth) * MOVING_AVERAGE_WEIGHT;
    predicted += (weightedAverage - currentHealth) *WEIGHTED_AVERAGE_WEIGHT;
    predicted += recovery.recoveryRate * RECOVERY_WEIGHT;
    
    switch (trend) {
        case IMPROVING:
            predicted += IMPROVING_BONUS;
            break;
        case STABLE_TREND:
            predicted += STABLE_BONUS;
            break;
        case DECLINING:
            predicted -= DECLINING_PENALTY;
            break;
        case RAPID_DECLINE:
            predicted -= RAPID_DECLINE_PENALTY;
            break;
        default:
            break;
    }

    prediction.predictedHealth = clamp(predicted);

    float confidenceScale = confidence.overallConfidence / 100.0f;
    prediction.confidenceAdjustedPrediction = currentHealth + (prediction.predictedHealth - currentHealth) * confidenceScale;
    prediction.confidenceAdjustedPrediction = clamp(prediction.confidenceAdjustedPrediction);

    prediction.estimatedRecoveryHours = recovery.estimatedRecoveryTime * 24.0f;

    prediction.improving = prediction.confidenceAdjustedPrediction > currentHealth;

    return prediction;
}