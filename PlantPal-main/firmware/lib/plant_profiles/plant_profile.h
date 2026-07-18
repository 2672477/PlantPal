#ifndef PLANT_PROFILE_H
#define PLANT_PROFILE_H

#include "../utils/types.h"
#include "../adaptive_health_curve/adaptive_health_curve.h"

struct PlantProfile {
    HealthCurveConfig moistureCurve;
    HealthCurveConfig sunlightCurve;
    HealthCurveConfig temperatureCurve;

    float sunlightWeight;
    float moistureWeight;
    float temperatureWeight;

    float recoverySensitivity;;
};

#endif // PLANT_PROFILE_H