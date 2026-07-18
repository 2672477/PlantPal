#ifndef CONDITION_ANALYSIS_H
#define CONDITION_ANALYSIS_H

#include "../stress_analysis/stress_analysis.h"
#include "../trend_classification/trend_classification.h"
#include "../environmental_stability/environmental_stability.h"
#include "../sensor_diagnostics/sensor_diagnostics.h"

enum PlantCondition {
    CONDITION_UNKNOWN,
    CONDITION_HEALTHY,
    CONDITION_UNDERWATERD,
    CONDITION_OVERWATERED,
    CONDITION_LOW_LIGHT,
    CONDITION_EXCESS_LIGHT,
    CONDITION_TOO_COLD,
    CONDITION_TOO_HOT,
    CONDITION_ENVIRONMENTAL_STRESS,
    CONDITION_SENSOR_FAULT,
    CONDITION_RECOVERING,
    CONDITION_CRITICAL
};

struct ConditionAnalysis {
    PlantCondition condition;
    float confidence;
    bool immediateAction;
    bool multipleFactors;
    uint8_t contributingFactors;
};

struct ConditionSensors {
    const SensorDiagnostics& moisture;
    const SensorDiagnostics& sunlight;
    const SensorDiagnostics& temperature;
};

ConditionAnalysis analyzeCondition(
    float currentHealth,
    float moistureScore,
    float sunlightScore,
    float temperatureScore,
    const StressResult& stress,
    const TrendClassification& classification,
    const EnvironmentalStability& environment,
    const ConditionSensors& sensors
);

#endif