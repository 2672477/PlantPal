#ifndef DYNAMIC_RECOVERY_H
#define DYNAMIC_RECOVERY_H

#include "../trend_analysis/trend_analysis.h"
#include "../health_confidence/health_confidence.h"
#include "../plant_profiles/plant_profile.h"

enum RecoveryState {
    VERY_SLOW_RECOVERY,
    SLOW_RECOVERY,
    MODERATE_RECOVERY,
    FAST_RECOVERY,
    EXCELLENT_RECOVERY
};

struct RecoveryResult {
    float recoveryRate;
    float estimatedRecoveryTime;
    bool recoveringWell;
    RecoveryState state;
};

RecoveryResult calculateRecovery (
    float currentHealth,
    float stressIndex,
    const HealthConfidence& confidence,
    TrendState state,
    const PlantProfile& profile
);

#endif