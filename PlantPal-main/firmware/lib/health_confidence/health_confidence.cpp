#include "health_confidence.h"

static float absoluteValue(float value) {
    return (value < 0.0f) ? - value : value;
}

static float clamp(float value) {
    if (value < 0.0f) {
        return 0.0f;
    }

    if (value > 100.0f) {
        return 100.0f;
    }

    return value;
}

ConfidenceLevel getConfidenceLevel(float confidence) {
    if (confidence >= 90.0f) {
        return VERY_HIGH_CONFIDENCE;
    }

    if (confidence >= 75.0f) {
        return HIGH_CONFIDENCE;
    }

    if (confidence >= 60.0f) {
        return MEDIUM_CONFIDENCE;
    }

    if (confidence >= 40.0f) {
        return LOW_CONFIDENCE;
    }

    else {
        return VERY_LOW_CONFIDENCE;
    }
}

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
)
{
    HealthConfidence confidence;

    confidence.sensorReliability = (moistureReliability + sunlightReliability + temperatureReliability) / 3.0f ;


    int calibratedSensors = 0;

    if (moistureCalibration.initialized) {
        calibratedSensors++ ;
    }

    if (sunlightCalibration.initialized) {
        calibratedSensors++ ;
    }

    if (temperatureCalibration.initialized) {
        calibratedSensors++ ;
    }

    confidence.calibrationConfidence = (calibratedSensors / 3.0f) * 100.0f ;


    confidence.stabilityConfidence = 100.0f - stressIndex;
    confidence.stabilityConfidence = clamp(confidence.stabilityConfidence);

    
    float averageScore = (moistureScore + sunlightScore + temperatureScore) / 3.0f;
    float deviation = (absoluteValue(moistureScore - averageScore) + absoluteValue(sunlightScore - averageScore) + absoluteValue(temperatureScore - averageScore)) / 3.0f;
    confidence.consistencyConfidence = 100.0f - deviation;
    confidence.consistencyConfidence = clamp(confidence.consistencyConfidence);


    confidence.overallConfidence = confidence.sensorReliability * 0.35f + confidence.calibrationConfidence * 0.20f + confidence.stabilityConfidence * 0.15f + confidence.consistencyConfidence * 0.30f;
    confidence.level = getConfidenceLevel(confidence.overallConfidence);

    return confidence;
}