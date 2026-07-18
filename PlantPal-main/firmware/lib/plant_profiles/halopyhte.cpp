#include "halopyhte.h"

PlantProfile getHalophyteProfile()
{
    PlantProfile profile;

    // Moisture
    profile.moistureCurve.minimum = 45.0f;
    profile.moistureCurve.ideal = 60.0f;
    profile.moistureCurve.maximum = 75.0f;
    profile.moistureCurve.edgeScore = 85.0f;
    profile.moistureCurve.curveStrength = 4.0f;
    profile.moistureCurve.curveType = PLATEAU_CURVE;

    // Sunlight
    profile.sunlightCurve.minimum = 60.0f;
    profile.sunlightCurve.ideal = 80.0f;
    profile.sunlightCurve.maximum = 100.0f;
    profile.sunlightCurve.edgeScore = 85.0f;
    profile.sunlightCurve.curveStrength = 4.0f;
    profile.sunlightCurve.curveType = PLATEAU_CURVE;

    // Temperature
    profile.temperatureCurve.minimum = 22.0f;
    profile.temperatureCurve.ideal = 28.0f;
    profile.temperatureCurve.maximum = 35.0f;
    profile.temperatureCurve.edgeScore = 85.0f;
    profile.temperatureCurve.curveStrength = 4.0f;
    profile.temperatureCurve.curveType = PLATEAU_CURVE;

    profile.moistureWeight = 0.40f;
    profile.sunlightWeight = 0.35f;
    profile.temperatureWeight = 0.25f;

    profile.recoverySensitivity = 0.90f;

    return profile;
}