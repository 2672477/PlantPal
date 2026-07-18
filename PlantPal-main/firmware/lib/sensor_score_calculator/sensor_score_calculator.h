#ifndef SENSOR_SCORE_CALCULATOR_H
#define SENSOR_SCORE_CALCULATOR_H

#include "../utils/types.h"
#include "../adaptive_health_curve/adaptive_health_curve.h"

float calculateSensorScore(
    float normalizedScore,
    const HealthCurveConfig& config
);

#endif