#include "score_calculator.h"

float calculateHealthScore(
    SensorScore scores,
    PlantProfile profile,
    float multiplier
)
{
    float weightedScore =

        scores.sunlightScore * profile.sunlightWeight +

        scores.moistureScore * profile.moistureWeight +

        scores.temperatureScore * profile.temperatureWeight;

    float totalWeight =

        profile.sunlightWeight +

        profile.moistureWeight +

        profile.temperatureWeight;

    if (totalWeight <= 0.0f)
    {
        return 0.0f;
    }

    float healthScore = weightedScore / totalWeight;

    healthScore *= multiplier;

    if (healthScore < 0.0f)
        healthScore = 0.0f;

    if (healthScore > 100.0f)
        healthScore = 100.0f;

    return healthScore;
}