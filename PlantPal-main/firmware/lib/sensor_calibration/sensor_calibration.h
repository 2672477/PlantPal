#ifndef SENSOR_CALIBRATION_H
#define SENSOR_CALIBRATION_H

struct SensorCalibration{
    float minimumValue;
    float maximumValue;

    bool initialized;
};

void initializeCalibration(
    SensorCalibration& calibration
);

void updateCalibration(
    SensorCalibration& calibration,
    float rawValue
);

float getCalibratedValue(
    float rawValue,
    SensorCalibration& calibration 
);

#endif 