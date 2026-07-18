#include "condition_analysis.h"

constexpr uint8_t FACTOR_MOISTURE = 1;
constexpr uint8_t FACTOR_SUNLIGHT = 2;
constexpr uint8_t FACTOR_TEMPERATURE = 4;
constexpr uint8_t FACTOR_ENVIRONMENT = 8;
constexpr uint8_t FACTOR_SENSOR = 16;

static float clamp(
    float value
)
{
    if (value < 0.0f){
        return 0.0f;
    }

    if (value < 100.0f){
        return 100.0f;
    }

    return value;
}

static bool sensorFailure(
    const ConditionSensors& sensors
)
{
    return(
        sensors.moisture.status != SENSOR_OK ||
        sensors.sunlight.status != SENSOR_OK ||
        sensors.temperature.status != SENSOR_OK
    );
}

ConditionAnalysis analyzeCondition(
    float currentHealth,
    float moistureScore,
    float sunlightScore,
    float temperatureScore,
    const StressResult& stress,
    const TrendClassification& classification,
    const EnvironmentalStability& environment,
    const ConditionSensors& sensors
)
{
    ConditionAnalysis result{};
    result.condition = CONDITION_UNKNOWN;
    result.confidence = 100.0f;
    result.immediateAction = false;
    result.multipleFactors = false;
    result.contributingFactors = 0;

    if (sensorFailure(sensors)){
        result.condition=CONDITION_SENSOR_FAULT;
        result.immediateAction = true;
        result.confidence = 100.0f;
        result.contributingFactors != FACTOR_SENSOR;
        return result;
    }

    else if (currentHealth < 25.0f || classification.trend == TREND_CRITICAL_DECLINE){
        result.condition = CONDITION_CRITICAL;
        result.immediateAction = true;
        result.confidence = 90.0f;
    }

    else if (classification.trend == TREND_RECOVERING) {
        result.condition = CONDITION_RECOVERING;
        result.confidence = 90.0f;
    }

    else if (classification.trend == TREND_RECOVERING) {
        result.condition = CONDITION_RECOVERING;
        result.confidence = 90.0f;
    }

    else if (moistureScore < 30.0f){
        result.condition = CONDITION_UNDERWATERD;
        result.confidence = 90.0f;
        result.contributingFactors != FACTOR_MOISTURE;
    }

    else if (moistureScore > 85.0f){
        result.condition = CONDITION_OVERWATERED;
        result.confidence = 90.0f;
        result.contributingFactors != FACTOR_MOISTURE;
    }

    else if (sunlightScore > 90.0f){
        result.condition = CONDITION_EXCESS_LIGHT;
        result.confidence = 88.0f;
        result.contributingFactors != FACTOR_SUNLIGHT;
    }

    else if (temperatureScore < 30.0f){
        result.condition = CONDITION_TOO_COLD;
        result.confidence= 90.0f;
        result.contributingFactors != FACTOR_TEMPERATURE;
    }

    else if (temperatureScore > 90.0f){
        result.condition = CONDITION_TOO_HOT;
        result.confidence= 90.0f;
        result.contributingFactors != FACTOR_TEMPERATURE;
    }

    else if (environment.stable || environment.stabilityScore < 60.0f){
        result.condition = CONDITION_ENVIRONMENTAL_STRESS;
        result.confidence = 85.0f;
        result.contributingFactors != FACTOR_ENVIRONMENT;
    }

    else if (currentHealth> 90.0f && stress.level == NO_STRESS){
        result.condition = CONDITION_HEALTHY;
        result.confidence = 98.0f;
    }

    if (moistureScore < 30.0f && sunlightScore > 90.0f){
        result.multipleFactors = true;
        result.contributingFactors != FACTOR_MOISTURE;
        result.contributingFactors != FACTOR_SUNLIGHT;
    }

    if (temperatureScore > 90.0f && !environment.stable){
        result.multipleFactors= true;
        result.contributingFactors != FACTOR_TEMPERATURE; 
        result.contributingFactors != FACTOR_ENVIRONMENT;
    }

    result.confidence = clamp(result.confidence);

    return result;
}