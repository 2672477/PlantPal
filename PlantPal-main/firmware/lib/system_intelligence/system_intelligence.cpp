#include "system_intelligence.h"

#include "../score_calculator/score_calculator.h"
#include "../emotion_logic/emotion_logic.h"
#include "../hysteresis/hysteresis.h"
#include "../water_recovery/water_recovery.h"
#include "../sleep_awareness/sleep_awareness.h"
#include "../led_accent/led_accent.h"
#include "../smart_analysis/smart_analysis.h"

float anchorHealthScore = 100.0f;
float anchoredHealthScore = 100.0f;

Emotion activeEmotion = THRIVING;

void runSystemIntelligence() {
    float currentHealthScore = calculateHealthScore();

    Emotion currentEmotion = getEmotionFromScore(currentHealthScore);

    bool shouldUpdate = shouldUpdateEmotion(anchorHealthScore, currentHealthScore, activeEmotion, currentEmotion);

    if (shouldUpdate) {
        activeEmotion = currentEmotion;
        anchoredHealthScore = currentHealthScore;
    }

    if (isRecoveryActive()){
        activeEmotion = updateRecoveryEmotion();
    }
    
    updatedLEDAccent(activeEmotion);
}