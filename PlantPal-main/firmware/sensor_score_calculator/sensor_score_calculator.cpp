#include "sensor_score_calculator.h"

float calculateSensorScore(
    float sensorValue,
    float idealMin,
    float idealMax,
    float maxDifference
)
{
    float distanceFromRange = 0.0f;

    if (sensorValue >= idealMin && 
        sensorValue <= idealMax) {
            return 1.0f;
        }
    
    if (sensorValue < idealMin) {
        distanceFromRange = idealMin - sensorValue;
    }

    else if (sensorValue > idealMax) {
    distanceFromRange = sensorValue - idealMax;
    }
    
    if (maxDifference <= 0.0f) {
        return 0.0f; 
    }
    
    float score = 1.0f - (distanceFromRange / maxDifference);
    if (score < 0.0f) {
        score = 0.0f;
    }
    else if (score > 1.0f) {
        score = 1.0f;
    }
    return score;
}