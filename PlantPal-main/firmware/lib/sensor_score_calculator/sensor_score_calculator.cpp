#include "sensor_score_calculator.h"

float calculateSensorScore(
    float normalizedValue,
    const HealthCurveConfig& config
)
{
    return calculateAdaptiveHealth(
        normalizedValue,
        config
    );
}