#include "dynamic_recovery.h"

constexpr float BASE_RECOVERY = 5.0f;

constexpr float STRESS_FACTOR = 0.04f;
constexpr float CONFIDENCE_FACTOR = 0.02f;
constexpr float HEALTH_FACTOR = 0.02f;

constexpr float MIN_RECOVERY_RATE = 0.5f;
constexpr float MAX_RECOVERY_RATE = 15.0f;

static float clamp(float value, float minimum, float maximum) {
    if (value < minimum) {
        return minimum;
    }

    if (value > maximum) {
        return maximum;
    }

    return value;
}

RecoveryResult calculateRecovery(
    float currentHealth,
    float stressIndex,
    const HealthConfidence& confidence,
    TrendState trend,
    const PlantProfile& profile
)
{
    RecoveryResult result{};

    float recovery = BASE_RECOVERY;

    recovery += (100.0f - stressIndex) * STRESS_FACTOR;

    recovery += confidence.overallConfidence * CONFIDENCE_FACTOR;

    recovery += currentHealth * HEALTH_FACTOR;

    switch (trend) {
        case IMPROVING :
            recovery += 2.0f;
            break;
        case STABLE_TREND :
            recovery += 1.0f;
            break;
        case DECLINING :
            recovery -= 2.0f;
            break;
        case RAPID_DECLINE :
            recovery -= 4.0f;
            break;
        default:
            break;
    }

    recovery *= profile.recoverySensitivity;

    recovery = clamp(recovery, MIN_RECOVERY_RATE, MAX_RECOVERY_RATE);
    result.recoveryRate = recovery;

    if (recovery > 0.0f) {
        result.estimatedRecoveryTime = (100.0f - currentHealth) / recovery;
    }

    else{
        result.estimatedRecoveryTime = 999.0f;
    }

    result.recoveringWell = (recovery >= 6.0f);

    if (recovery < 2.0f) {
        result.state = VERY_SLOW_RECOVERY;
    }
    
    else if (recovery < 5.0f) {
        result.state = SLOW_RECOVERY;
    }

    else if (recovery < 8.0f) {
        result.state = MODERATE_RECOVERY;
    }

    else if (recovery < 12.0f) {
        result.state = FAST_RECOVERY;
    }

    else {
        result.state = EXCELLENT_RECOVERY;
    }

    return result;
}