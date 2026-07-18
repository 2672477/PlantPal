#include "sensor_reliability.h"

SensorReliability calculateReliability(
    const SensorDiagnostics& diagnostics,
    const SensorCalibration& calibration
)
{
    SensorReliability reliability;
    reliability.calibrationValid = calibration.initialized;
    reliability.diagnosticsPassed = (diagnostics.status == SENSOR_OK);
    float score = diagnostics.confidence;

    if (!calibration.initialized) {
        score *= 0.50f;
    }

    float calibrationRange = calibration.maximumValue - calibration.minimumValue;

    if (calibrationRange < 0.05f) {
        score *= 0.60f;
    }

    switch (diagnostics.status)
    {
    case SENSOR_OK:
        break;

    case SENSOR_UNSTABLE:
        score *= 0.80f;
        break;

    case SENSOR_STUCK:
        score *= 0.25f;
        break;
    case SENSOR_DISCONNECTED:
        score = 0.0f;
        break;
    case SENSOR_INVALID:
        score = 0.0f;
        break;
    }

    if (score < 0.0f) {
        score = 0.0f;
    }

    if (score > 100.0f) {
        score = 100.0f;
    }

    reliability.reliabilityScore = score;
    reliability.reliable = (score >= 70.0f);

    return reliability;
}
