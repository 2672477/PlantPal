#ifndef STRESS_ANALYSIS_H
#define STRESS_ANALYSIS_H

#include "../plant_profiles/plant_profile.h"

enum StressLevel {
    NO_STRESS,
    LOW_STRESS,
    MODERATE_STRESS,
    HIGH_STRESS,
    EXTREME_STRESS
};

struct StressResult {
    float moistureStress;
    float sunlightStress;
    float temperatureStress;

    float stressIndex;

    float healthMultiplier;

    float confidence;

    StressLevel level;
};

StressResult calculateStressIndex(
    float moisture,
    float sunlight,
    float temperature,
    const PlantProfile& profile
);

#endif