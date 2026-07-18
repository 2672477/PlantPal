#ifndef WATER_RECOVERY_H    
#define WATER_RECOVERY_H

#include "../utils/types.h"

bool isRecoveryActive();

void startRecovery(
    Emotion startingEmotion
);

Emotion updateRecovery();

#endif