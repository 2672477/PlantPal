#include "hygropyhte.h"

PlantProfile getHygrophyteProfile()
{
    PlantProfile profile;

    // Moisture
    profile.moistureCurve.minimum = 70.0f;
    profile.moistureCurve.ideal = 85.0f;
    profile.moistureCurve.maximum = 100.0f;
    profile.moistureCurve.edgeScore = 90.0f;
    profile.moistureCurve.curveStrength = 4.0f;
    profile.moistureCurve.curveType = PLATEAU_CURVE;

    // Sunlight
    profile.sunlightCurve.minimum = 20.0f;
    profile.sunlightCurve.ideal = 40.0f;
    profile.sunlightCurve.maximum = 60.0f;
    profile.sunlightCurve.edgeScore = 80.0f;
    profile.sunlightCurve.curveStrength = 4.0f;
    profile.sunlightCurve.curveType = BELL_CURVE;

    // Temperature
    profile.temperatureCurve.minimum = 20.0f;
    profile.temperatureCurve.ideal = 26.0f;
    profile.temperatureCurve.maximum = 30.0f;
    profile.temperatureCurve.edgeScore = 85.0f;
    profile.temperatureCurve.curveStrength = 4.0f;
    profile.temperatureCurve.curveType = BELL_CURVE;

    profile.moistureWeight = 0.50f;
    profile.sunlightWeight = 0.25f;
    profile.temperatureWeight = 0.25f;

    profile.recoverySensitivity = 1.10f;

    return profile;
}