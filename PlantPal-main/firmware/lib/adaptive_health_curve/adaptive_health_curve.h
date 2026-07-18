#ifndef ADAPTIVE_HEALTH_CURVE_H
#define ADAPTIVE_HEALTH_CURVE_H

enum CurveType {
    LINEAR_CURVE,
    BELL_CURVE,
    PLATEAU_CURVE
};

struct HealthCurveConfig {
    float minimum;
    float ideal;
    float maximum;

    float edgeScore;

    float curveStrength;

    CurveType curveType;
};

float calculateAdaptiveHealth (
    float normalizedValue,
    const HealthCurveConfig& config
);

#endif
