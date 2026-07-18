#include "adaptive_health_curve.h"

#include <math.h>

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

static float linearCurve(
    float value,
    const HealthCurveConfig& config
)
{
    if (value < config.minimum || value > config.maximum) {
        return 0.0f;
    }

    float leftDistance = (value - config.minimum) / (config.ideal - config.minimum);
    float rightDistance = (config.maximum - value) / (config.maximum - config.ideal);

    float factor;

    if (value <= config.ideal) {
        factor = leftDistance;
    }
    else {
        factor = rightDistance;
    }

    factor = clampValue(factor, 0.0f, 1.0f);

    return config.edgeScore + factor * (100.0f - config.edgeScore);
}

static float bellCurve(
    float value,
    const HealthCurveConfig& config
)
{
    if (value < config.minimum || value > config.maximum) {
        return 0.0f;
    }

    float sigma = (config.maximum - config.minimum) / config.curveStrength;

    float difference = value - config.ideal;

    float exponent = -(difference * difference) / (2.0 * sigma * sigma);

    float gaussian = exp(exponent);

    float score = config.edgeScore + gaussian * (100.0f - config.edgeScore);

    return clampValue(score, 0.0f, 100.0f);
}

static float plateauCurve(
    float value,
    const HealthCurveConfig& config
)
{
    if (value < config.minimum || value > config.maximum) {
        return 0.0f;
    }

    float width = (config.maximum - config.minimum) * 0.20f;

    float plateauStart = config.ideal - width;

    float plateauEnd = config.ideal + width;

    if (value >= plateauStart && value <= plateauEnd) {
        return 0.0f;
    }

    if (value < plateauStart) {
        float factor = (value - config.minimum) / (plateauStart - config.minimum);
        
        factor = clampValue(factor, 0.0f, 1.0f);

        return config.edgeScore + factor * (100.0f - config.edgeScore);
    }

    float factor = (config.maximum - value) / (config.maximum - plateauEnd);

    factor = clampValue (factor, 0.0f, 1.0f);

    return config.edgeScore + factor * (100.0f - config.edgeScore);
}

float calculateAdaptiveHealth(
    float normalizedValue,
    const HealthCurveConfig& config
)
{
    switch (config.curveType) {
        case LINEAR_CURVE:
            return linearCurve(normalizedValue, config);
        case BELL_CURVE:
            return bellCurve(normalizedValue, config);
        case PLATEAU_CURVE:
            return plateauCurve(normalizedValue, config);
        default:
            return bellCurve(normalizedValue, config);
    }
}