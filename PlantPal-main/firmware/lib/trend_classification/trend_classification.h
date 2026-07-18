#ifndef TREND_CLASSIFICATION_H
#define TREND_CLASSIFICATION_H

#include "../trend_analysis/trend_analysis.h"
#include "../trend_prediction/trend_prediction.h"
#include "../trend_prediction_confidence/trend_prediction_confidence.h"
#include "../environmental_stability/environmental_stability.h"

enum PlantTrend {
    TREND_THRIVING,
    TREND_RECOVERING,
    TREND_STABLE,
    TREND_STRESSED,
    TREND_CRITICAL_DECLINE
};

struct TrendClassification {
    PlantTrend trend;
    bool requiresAttention;
    float severity;
};

TrendClassification classifyPlantState (
    float currentHealth,
    float stressIndex,
    const TrendPrediction& prediction,
    const TrendPredictionConfidence& predictionConfidence,
    const EnvironmentalStability& environment
);

#endif