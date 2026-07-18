#include "trend_prediction_confidence.h"

int getHistorySampleCount();

constexpr float MAX_CONFIDENCE = 100.0f;

constexpr float HEALTH_CONFIDENCE_WEIGHT = 0.40f;
constexpr float VOLATILITY_WEIGHT = 0.20f;
constexpr float HISTORY_WEIGHT = 0.15f;
constexpr float RECOVERY_WEIGHT = 0.15f;
constexpr float TREND_WEIGHT = 0.10f;

constexpr float RELIABLE_THRESHOLD = 70.0f;

constexpr float MAX_PREDICTION_HOURS = 72.0f;
constexpr float MAX_TIME_PENALTY = 25.0f;

static float clamp(float value) {
    if (value < 0.0f) {
        return 0.0f;
    }

    if (value > MAX_CONFIDENCE) {
        return MAX_CONFIDENCE;
    }

    return value;
}

TrendPredictionConfidence calculateTrendPredictionConfidence(
    const HealthConfidence& healthConfidence,
    const RecoveryResult& recovery,
    float predictHours
)
{
    TrendPredictionConfidence result {};

    float volatility = calculateVolatility();
    TrendState trend = getTrendState();
    int historySamples = getHistorySampleCount();

    float confidence = 0.0f;

    confidence += healthConfidence.overallConfidence * HEALTH_CONFIDENCE_WEIGHT;

    float stability = 100.0f - (volatility * 10.0f);

    stability = clamp(stability);

    confidence += stability * VOLATILITY_WEIGHT;

    float historyConfidence = (historySamples * 100.0f) / TREND_HISTORY_SIZE;

    historyConfidence = clamp(historyConfidence);

    confidence += historyConfidence * HISTORY_WEIGHT;

    float recoveryConfidence;

    switch (recovery.state) {
        case EXCELLENT_RECOVERY:
            recoveryConfidence = 100.0f;
            break;
        case FAST_RECOVERY:
            recoveryConfidence = 90.0f;
            break;
        case MODERATE_RECOVERY:
            recoveryConfidence = 75.0f;
            break;
        case SLOW_RECOVERY:
            recoveryConfidence = 60.0f;
            break;
        case VERY_SLOW_RECOVERY:
            recoveryConfidence = 30.0f;
            break;
        default :
            recoveryConfidence = 40.0f;
            break;
    }

    confidence += recoveryConfidence * RECOVERY_WEIGHT;

    float trendConfidence;

    switch (trend) {
        case IMPROVING:
            recoveryConfidence = 100.0f;
            break;
        case STABLE_TREND:
            trendConfidence = 95.0f;
            break;
        case DECLINING:
            trendConfidence = 70.0f;
            break;
        case RAPID_DECLINE:
            trendConfidence = 40.0f;
            break;
        default:
            trendConfidence = 50.0f;
            break;
    }

    confidence += trendConfidence * TREND_WEIGHT;

    if (predictHours > 0.0f) {
        float penalty = (predictHours / MAX_PREDICTION_HOURS) * MAX_TIME_PENALTY;

        if (penalty > MAX_TIME_PENALTY) {
            penalty = MAX_TIME_PENALTY;
        }

        confidence -= penalty;
    }

    result.confidence = clamp(confidence);

    result.reliablePrediction = (result.confidence >= RELIABLE_THRESHOLD);

    return result;
}