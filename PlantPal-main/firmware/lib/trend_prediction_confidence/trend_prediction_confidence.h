#ifndef TREND_PREDICTION_CONFIDENCE_H
#define TREND_PREDICTION_CONFIDENCE_H

#include "../health_confidence/health_confidence.h"
#include "../dynamic_recovery/dynamic_recovery.h"
#include "../trend_analysis/trend_analysis.h"

struct TrendPredictionConfidence {
    float confidence;
    bool reliablePrediction;
};

TrendPredictionConfidence calculateTrendPredictionConfidence(
    const HealthConfidence& healthConfidence,
    const RecoveryResult& recovery,
    float predictHours
);

#endif