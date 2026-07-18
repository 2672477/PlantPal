#ifndef SENSOR_DIAGNOSTICS_H
#define SENSOR_DIAGNOSTICS_H

#define SENSOR_HISTORY_SIZE 20

enum SensorStatus
{
    SENSOR_OK,
    SENSOR_DISCONNECTED,
    SENSOR_STUCK,
    SENSOR_UNSTABLE,
    SENSOR_INVALID
};

struct SensorDiagnostics
{
    float history[SENSOR_HISTORY_SIZE];

    int index;
    int sampleCount;

    float minimumValid;
    float maximumValid;

    float stuckTolerance;
    float unstableThreshold;

    float average;
    float variance;

    float confidence;

    SensorStatus status;
};

void initializeDiagnostics(
    SensorDiagnostics& diagnostics,
    float minimumValid,
    float maximumValid,
    float stuckTolerance,
    float unstableThreshold
);

SensorStatus analyzeSensor(
    SensorDiagnostics& diagnostics,
    float value
);

float getSensorConfidence(
    const SensorDiagnostics& diagnostics
);

#endif