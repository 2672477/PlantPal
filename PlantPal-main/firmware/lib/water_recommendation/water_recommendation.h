#ifndef WATER_RECOMMENDATION_H
#define WATER_RECOMMENDATION_H

#include "../plant_profiles/plant_profile.h"
#include "../stress_analysis/stress_analysis.h"
#include "../trend_prediction/trend_prediction.h"
#include "../environmental_stability/environmental_stability.h"

struct WaterRecommendation {
    bool waterNow;
    float recommendationAmount;
    float urgency;
    bool overwaterRisk;
    bool underwaterRisk;
    bool waitForRecovery;
};

WaterRecommendation generateWaterRecommendation(
    float currentHealth,
    float moistureScore,
    const PlantProfile& profile,
    const StressResult& stress,
    const TrendPrediction& prediction,
    const EnvironmentalStability& environment
);

#endif
