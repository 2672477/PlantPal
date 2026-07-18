#ifndef TREND_PREDICTION_H
#define TREND_PREDICTION_H

#include "../health_confidence/health_confidence.h"
#include "../dynamic_recovery/dynamic_recovery.h"
#include "../trend_analysis/trend_analysis.h"

struct TrendPrediction {
    float predictedHealth;
    float confidenceAdjustedPrediction;
    float estimatedRecoveryHours;
    bool improving;
};

TrendPrediction predictTrend(
    float currentHealth,
    const HealthConfidence& confidence,
    const RecoveryResult& recovery
);

#endif 