#include "hydropyhte.h"

PlantProfile getHydrophyteProfile()
{
    PlantProfile profile;

    // Moisture
    profile.moistureCurve.minimum = 80.0f;
    profile.moistureCurve.ideal = 92.0f;
    profile.moistureCurve.maximum = 100.0f;
    profile.moistureCurve.edgeScore = 90.0f;
    profile.moistureCurve.curveStrength = 4.0f;
    profile.moistureCurve.curveType = PLATEAU_CURVE;

    // Sunlight
    profile.sunlightCurve.minimum = 30.0f;
    profile.sunlightCurve.ideal = 50.0f;
    profile.sunlightCurve.maximum = 70.0f;
    profile.sunlightCurve.edgeScore = 85.0f;
    profile.sunlightCurve.curveStrength = 4.0f;
    profile.sunlightCurve.curveType = BELL_CURVE;

    // Temperature
    profile.temperatureCurve.minimum = 20.0f;
    profile.temperatureCurve.ideal = 25.0f;
    profile.temperatureCurve.maximum = 30.0f;
    profile.temperatureCurve.edgeScore = 85.0f;
    profile.temperatureCurve.curveStrength = 4.0f;
    profile.temperatureCurve.curveType = PLATEAU_CURVE;

    // Sensor Weights
    profile.moistureWeight = 0.55f;
    profile.sunlightWeight = 0.20f;
    profile.temperatureWeight = 0.25f;

    profile.recoverySensitivity = 1.25f;

    return profile;
}