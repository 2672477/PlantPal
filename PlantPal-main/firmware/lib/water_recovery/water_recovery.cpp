#include "water_recovery.h"
#include <Arduino.h>

static bool RecoveryActive = false;
static Emotion currentRecoveryEmotion = STABLE;
static unsigned long lastRecoveryUpdate = 0;
static int recoveryStage = 0;

bool isRecoveryActive() {
    return RecoveryActive;
}

void startRecovery(Emotion startingEmotion) {
    if (startingEmotion == THRIVING) {
        RecoveryActive = false;
        currentRecoveryEmotion = THRIVING;
        return;
    }
    RecoveryActive = true;
    currentRecoveryEmotion = startingEmotion;
    lastRecoveryUpdate = millis();
    recoveryStage = 0;
}

Emotion updateRecovery() {
    if (!RecoveryActive) {
        return currentRecoveryEmotion;
    }

    if (millis() - lastRecoveryUpdate >= 4000) {
        lastRecoveryUpdate = millis();
        switch (currentRecoveryEmotion) {
            case CRITICAL: 
                currentRecoveryEmotion = CONCERNING;
                break;
            case CONCERNING:
                currentRecoveryEmotion = STABLE;
                break;
            case STABLE:
                currentRecoveryEmotion = HEALTHY;
                break;
            case HEALTHY:
                currentRecoveryEmotion = THRIVING;
                RecoveryActive = false;
                break;
            default:
                break;
        }
    }
    return currentRecoveryEmotion;
}