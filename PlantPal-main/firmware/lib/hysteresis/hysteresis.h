#ifndef HYSTERESIS_H
#define HYSTERESIS_H

#include "../utils/types.h"

bool shouldUpdateEmotion(
    float previousHealthScore,
    float currentHealthScore,
    Emotion previousEmotion,
    Emotion currentEmotion
);

#endif 


