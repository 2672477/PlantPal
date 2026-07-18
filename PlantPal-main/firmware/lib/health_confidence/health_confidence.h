#ifndef HEALTH_CONFIDENCE_H
#define HEALTH_CONFIDENCE_H

#include "../sensor_diagnostics/sensor_diagnostics.h"
#include "../sensor_calibration/sensor_calibration.h"

enum ConfidenceLevel {
    VERY_LOW_CONFIDENCE,
    LOW_CONFIDENCE,
    MEDIUM_CONFIDENCE,
    HIGH_CONFIDENCE,
    VERY_HIGH_CONFIDENCE
};

struct HealthConfidence {
    float overallConfidence;
    float sensorReliability;
    float calibrationConfidence;
    float stabilityConfidence;
    float consistencyConfidence;
    ConfidenceLevel level;
};

HealthConfidence calculateHealthConfidence(
    float moistureReliability,
    float sunlightReliability,
    float temperatureReliability,

    const SensorCalibration& moistureCalibration,
    const SensorCalibration& sunlightCalibration,
    const SensorCalibration& temperatureCalibration,

    float moistureScore,
    float sunlightScore,
    float temperatureScore,

    float stressIndex
);

ConfidenceLevel getConfidenceLevel(
    float confidence
);

#endif

