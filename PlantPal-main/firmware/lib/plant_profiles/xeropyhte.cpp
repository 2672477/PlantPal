#include "xeropyhte.h"

PlantProfile getXerophyteProfile()
{
    PlantProfile profile;

    // Moisture
    profile.moistureCurve.minimum = 8.0f;
    profile.moistureCurve.ideal = 15.0f;
    profile.moistureCurve.maximum = 22.0f;
    profile.moistureCurve.edgeScore = 80.0f;
    profile.moistureCurve.curveStrength = 5.0f;
    profile.moistureCurve.curveType = BELL_CURVE;

    // Sunlight
    profile.sunlightCurve.minimum = 70.0f;
    profile.sunlightCurve.ideal = 90.0f;
    profile.sunlightCurve.maximum = 100.0f;
    profile.sunlightCurve.edgeScore = 85.0f;
    profile.sunlightCurve.curveStrength = 4.0f;
    profile.sunlightCurve.curveType = PLATEAU_CURVE;

    // Temperature
    profile.temperatureCurve.minimum = 25.0f;
    profile.temperatureCurve.ideal = 32.0f;
    profile.temperatureCurve.maximum = 40.0f;
    profile.temperatureCurve.edgeScore = 85.0f;
    profile.temperatureCurve.curveStrength = 4.0f;
    profile.temperatureCurve.curveType = PLATEAU_CURVE;

    profile.moistureWeight = 0.50f;
    profile.sunlightWeight = 0.30f;
    profile.temperatureWeight = 0.20f;

    profile.recoverySensitivity = 0.75f;

    return profile;
}