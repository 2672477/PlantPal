#include "calibration_storage.h"

Preferences preferences;

void initializeCalibrationStorage()
{
    preferences.begin("plantpal", false);
}

void saveCalibration(
    const char* sensorName,
    const SensorCalibration& calibration
)
{
    String minimumKey = String(sensorName) + "_min";
    String maximumKey = String(sensorName) + "_max";
    String initializedKey = String(sensorName) + "_init";

    preferences.putFloat(
        minimumKey.c_str(),
        calibration.minimumValue
    );

    preferences.putFloat(
        maximumKey.c_str(),
        calibration.maximumValue
    );

    preferences.putBool(
        initializedKey.c_str(),
        calibration.initialized
    );
}

void loadCalibration(
    const char* sensorName,
    SensorCalibration& calibration
)
{
    String minimumKey = String(sensorName) + "_min";
    String maximumKey = String(sensorName) + "_max";
    String initializedKey = String(sensorName) + "_init";

    calibration.minimumValue =
        preferences.getFloat(
            minimumKey.c_str(),
            0.0f
        );

    calibration.maximumValue =
        preferences.getFloat(
            maximumKey.c_str(),
            0.0f
        );

    calibration.initialized =
        preferences.getBool(
            initializedKey.c_str(),
            false
        );
}