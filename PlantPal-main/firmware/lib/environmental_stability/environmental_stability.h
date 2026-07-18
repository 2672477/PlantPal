#ifndef ENVIRONMENTAL_STABILITY_H
#define ENVIRONMENTAL_STABILITY_H

#include "../plant_profiles/plant_profile.h"

#define STABILITY_HISTORY_SIZE 20

struct EnvironmentalStability {
    float stabilityScore;
    float sunlightStability;
    float moistureStability;
    float temperatureStability;
    bool stable;
};

void initializeEnvironmentalStability();

EnvironmentalStability calculateEnvironmentalStability(
    float sunlight,
    float moisture,
    float temperature,
    const PlantProfile& profile
);

#endif
