#ifndef SENSOR_SCORE_CALCULATOR_H
#define SENSOR_SCORE_CALCULATOR_H

#include "../utils/types.h"

float calculateSensorScore(
    float sensorValue,
    float idealMin,
    float idealMax,
    float maxDifference
);

#endif