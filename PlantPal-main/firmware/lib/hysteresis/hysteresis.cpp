#include "hysteresis.h"

bool shouldUpdateEmotion(
    float previousHealthScore,
    float currentHealthScore,
    Emotion previousEmotion,
    Emotion currentEmotion
)

{
    float scoreDifference = currentHealthScore - previousHealthScore;

    if (scoreDifference < 0)  {
        currentHealthScore = -scoreDifference ;
    }
    if (previousEmotion != currentEmotion) {
        return true;
    }
    return false;
}