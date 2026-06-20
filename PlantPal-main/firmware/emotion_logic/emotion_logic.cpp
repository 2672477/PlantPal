#include "emotion_logic.h"

Emotion getEmotionFromScore(float healthScore) {
    if (healthScore >= 90 && healthScore <= 100) {
        return THRIVING;
    } else if (healthScore >= 70 && healthScore < 90) {
        return HEALTHY;
    } else if (healthScore >= 50 && healthScore < 70) {
        return STABLE;
    } else if (healthScore >= 30 && healthScore < 50) {
        return CONCERNING;
    } else {
        return CRITICAL;
    }
}