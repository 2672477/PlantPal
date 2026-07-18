#include "stress_analysis.h"

static float clampValue(
    float value,
    float minimum,
    float maximum
)
{
    if (value < minimum) {
        return minimum;
    }

    if (value > maximum) {
        return maximum;
    }

    return value;
}

static float calculateSensorStress(
    float value,
    float minimum,
    float maximum
)
{
    if (value >= minimum && value <= maximum) {
        return 0.0f;
    }

    if (value < minimum) {
        if (minimum <= 0.0f) {
            return 1.0f;
        }

        return clampValue ( (minimum - value) / minimum, 0.0f, 1.0f);
    }

    if (maximum >= 1.0f) {
        return 1.0f;
    }
    return clampValue ( (value - maximum) / (1.0f - maximum), 0.0f, 1.0f);
}

StressResult calculateStressIndex(
    float moisture,
    float sunlight,
    float temperature, 
    const PlantProfile& profile
)
{
    StressResult result;

    result.moistureStress = calculateSensorStress(moisture, profile.moistureCurve.minimum, profile.moistureCurve.maximum);
    result.sunlightStress = calculateSensorStress(sunlight, profile.sunlightCurve.minimum, profile.sunlightCurve.maximum);
    result.temperatureStress = calculateSensorStress(temperature, profile.temperatureCurve.minimum, profile.temperatureCurve.maximum);

    float totalStress = result.moistureStress * profile.moistureWeight + result.sunlightStress * profile.sunlightWeight + result.temperatureStress * profile.temperatureWeight;

    totalStress = clampValue (totalStress, 0.0f, 1.0f);

    result.stressIndex = totalStress * 100.0f;

    result.healthMultiplier = 1.0f - (0.80f * totalStress);
    result.healthMultiplier  = clampValue(result.healthMultiplier, 0.20f, 1.00f);

    result.confidence = 100.0f - result.stressIndex;
    result.confidence = clampValue(result.confidence, 0.0f, 100.0f);

    if (result.stressIndex < 5.0f) {
        result.level = NO_STRESS;
    }

    else if (result.stressIndex < 20.0f) {
        result.level = LOW_STRESS;
    }

    else if (result.stressIndex < 45.0f) {
        result.level = MODERATE_STRESS;
    }

    else if (result.stressIndex < 75.0f) {
        result.level = HIGH_STRESS;
    }

    else {
        result.level = EXTREME_STRESS;
    }

    return result;
}