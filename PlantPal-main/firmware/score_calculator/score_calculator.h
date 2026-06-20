#ifndef SCORE_CALCULATOR_H
#define SCORE_CALCULATOR_H

#include "../utils/types.h"
#include "../plant_profiles/plant_profile.h"

float calculateHealthScore(
    SensorScore scores,
    PlantProfile profile,
    float multiplier
);

#endif  