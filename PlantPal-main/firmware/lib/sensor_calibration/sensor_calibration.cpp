#include "sensor_calibration.h"

void initializeCalibration(
    SensorCalibration& calibration 
)
{
    calibration.minimumValue = 0.0f;
    calibration.maximumValue = 0.0f;
    calibration.initialized = false;
}

void updateCalibration(
    SensorCalibration& calibration,
    float rawValue
)
{
    if (!calibration.initialized) {
        calibration.minimumValue = rawValue;
        calibration.maximumValue = rawValue;
        calibration.initialized = true;
    }

    if (rawValue < calibration.minimumValue) {
        calibration.minimumValue = rawValue;
    }

    if (rawValue > calibration.maximumValue) {
        calibration.maximumValue = rawValue;
    }
}

float getCalibratedValue(
    float rawValue,
    SensorCalibration& calibration
)
{
    if (!calibration.initialized)
        return 0.0f;

    float range =
        calibration.maximumValue -
        calibration.minimumValue;

    if (range <= 0.0f)
        return 0.0f;

    float normalized =
        (rawValue - calibration.minimumValue) / range;

    if (normalized < 0.0f)
        normalized = 0.0f;

    if (normalized > 1.0f)
        normalized = 1.0f;

    return normalized;
}