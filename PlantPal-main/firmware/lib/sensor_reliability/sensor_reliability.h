#ifndef SENSOR_RELIABILITY_H
#define SENSOR_RELIABILITY_H

#include "../sensor_diagnostics/sensor_diagnostics.h"
#include "../sensor_calibration/calibration_storage.h"

struct SensorReliability {
    float reliabilityScore;
    bool reliable;
    bool calibrationValid;
    bool diagnosticsPassed;
};

SensorReliability calculateReliability(
    const SensorDiagnostics& diagnostics,
    const SensorCalibration& calibration
);

#endif
