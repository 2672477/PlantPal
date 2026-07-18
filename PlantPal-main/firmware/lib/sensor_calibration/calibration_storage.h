#ifndef CALIBRATION_STORAGE_H
#define CALIBRATION_STORAGE_H

#include <Preferences.h>

#include "sensor_calibration.h"

void initializeCalibrationStorage();

void saveCalibration(
    const char* sensorName,
    const SensorCalibration& calibration
);

void loadCalibration(
    const char* sensorName,
    SensorCalibration& calibration
);

#endif