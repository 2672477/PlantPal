#ifndef SEASONAL_ADJUSTMENT_H
#define SEASONAL_ADJUSTMENT_H

#include "../plant_profiles/plant_profile.h"

enum Season {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

struct SeasonalAdjustment {
    float moistureMultiplier;
    float sunlightMultiplier;
    float temperatureMultiplier;

    float recoveryMultiplier;

    Season currentSeason;
};

SeasonalAdjustment calculateSeasonAdjustment(
    Season season
);

PlantProfile applySeasonAdjustment(
    const PlantProfile& profile,
    const SeasonalAdjustment& adjustment
);

#endif