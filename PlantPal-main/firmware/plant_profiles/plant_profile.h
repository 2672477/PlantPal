#ifndef PLANT_PROFILE_H
#define PLANT_PROFILE_H

#include "../utils/types.h"

struct PlantProfile {
    float sunlightMin;
    float sunlightMax;

    float moistureMin;
    float moistureMax;

    float temperatureMin;
    float temperatureMax;

    float sunlightWeight;
    float moistureWeight;
    float temperatureWeight;
};

#endif // PLANT_PROFILE_H