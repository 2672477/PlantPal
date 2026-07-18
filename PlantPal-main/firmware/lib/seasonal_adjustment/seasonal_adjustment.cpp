#include "seasonal_adjustment.h"

SeasonalAdjustment calculateSeasonAdjustment(
    Season season
)
{
    SeasonalAdjustment result{};

    result.currentSeason = season;

    result.moistureMultiplier = 1.0f;
    result.sunlightMultiplier = 1.0f;
    result.temperatureMultiplier = 1.0f;
    result.recoveryMultiplier = 1.0f;

    switch(season) {
        case SPRING :
            result.moistureMultiplier = 1.00f;
            result.sunlightMultiplier = 1.00f;
            result.temperatureMultiplier = 1.00f;
            result.recoveryMultiplier = 1.15f;
            break;
        
        case SUMMER:
            result.moistureMultiplier = 1.20f;
            result.sunlightMultiplier = 1.10f;
            result.temperatureMultiplier = 1.15f;
            result.recoveryMultiplier = 0.95f;
            break;

        case AUTUMN:
            result.moistureMultiplier = 0.95f;
            result.sunlightMultiplier = 0.90f;
            result.temperatureMultiplier = 0.90f;
            result.recoveryMultiplier = 1.00f;
            break;

        case WINTER:
            result.moistureMultiplier = 0.80f;
            result.sunlightMultiplier = 0.75f;
            result.temperatureMultiplier = 0.80f;
            result.recoveryMultiplier = 0.80f;
            break;
    }

    return result;
}

PlantProfile applySeasonAdjustment(
    const PlantProfile& profile,
    const SeasonalAdjustment& adjustment
)
{
    PlantProfile adjusted = profile;

    adjusted.moistureCurve.minimum *= adjustment.moistureMultiplier;
    adjusted.moistureCurve.ideal *= adjustment.moistureMultiplier;
    adjusted.moistureCurve.maximum *= adjustment.moistureMultiplier;

    adjusted.sunlightCurve.minimum *= adjustment.sunlightMultiplier;
    adjusted.sunlightCurve.ideal *= adjustment.sunlightMultiplier;
    adjusted.sunlightCurve.maximum *= adjustment.sunlightMultiplier;

    adjusted.temperatureCurve.minimum *= adjustment.temperatureMultiplier;
    adjusted.temperatureCurve.ideal *= adjustment.temperatureMultiplier;
    adjusted.temperatureCurve.maximum *= adjustment.temperatureMultiplier;

    adjusted.recoverySensitivity *= adjustment.recoveryMultiplier;

    return adjusted;
}