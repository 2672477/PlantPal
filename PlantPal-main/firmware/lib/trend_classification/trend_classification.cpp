#include "trend_classification.h"

static float clampValue(float value)
{
    if (value < 0.0f)
    {
        return 0.0f;
    }

    if (value > 100.0f)
    {
        return 100.0f;
    }

    return value;
}

TrendClassification classifyPlantState(
    float currentHealth,
    float stressIndex,
    const TrendPrediction& prediction,
    const TrendPredictionConfidence& predictionConfidence,
    const EnvironmentalStability& environment
)
{
    TrendClassification result{};

    TrendState trendState = getTrendState();

    float severity = 0.0f;

    severity += (100.0f - currentHealth) * 0.45f;
    severity += stressIndex * 0.30f;
    severity += (100.0f - environment.stabilityScore) * 0.15f;
    severity += (100.0f - predictionConfidence.confidence) * 0.10f;

    result.severity = clampValue(severity);

    if (
        currentHealth >= 90.0f &&
        prediction.predictedHealth >= 90.0f &&
        stressIndex < 10.0f &&
        environment.stabilityScore >= 90.0f &&
        trendState == IMPROVING
    )
    {
        result.trend = TREND_THRIVING;
    }
    else if (
        trendState == IMPROVING &&
        prediction.improving &&
        prediction.predictedHealth >= currentHealth
    )
    {
        result.trend = TREND_RECOVERING;
    }
    else if (
        trendState == STABLE_TREND &&
        environment.stabilityScore >= 70.0f
    )
    {
        result.trend = TREND_STABLE;
    }
    else if (
        trendState == DECLINING ||
        stressIndex >= 60.0f
    )
    {
        result.trend = TREND_STRESSED;
    }
    else
    {
        result.trend = TREND_CRITICAL_DECLINE;
    }

    result.requiresAttention =
    (
        result.trend == TREND_STRESSED ||
        result.trend == TREND_CRITICAL_DECLINE ||
        !predictionConfidence.reliablePrediction
    );

    return result;
}