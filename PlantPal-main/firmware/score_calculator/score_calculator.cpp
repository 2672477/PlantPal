#include "score_calculator.h"

float calculateHealthScore(
    SensorScore scores,
    PlantProfile profile,
    float multiplier
)
{
    int dangerCount = 0;

    if (scores.sunlightScore < profile.sunlightMin ||
        scores.sunlightScore > profile.sunlightMax)
    {
        dangerCount++;
    }

    if (scores.moistureScore < profile.moistureMin ||
        scores.moistureScore > profile.moistureMax)
    {
        dangerCount++;
    }

    if (scores.temperatureScore < profile.temperatureMin ||
        scores.temperatureScore > profile.temperatureMax)
    {
        dangerCount++;
    }

    if (dangerCount == 0)
    {
        multiplier = 1.0f;
    }
    else if (dangerCount == 1)
    {
        multiplier = 0.7f;
    }
    else if (dangerCount == 2)
    {
        multiplier = 0.5f;
    }
    else
    {
        multiplier = 0.2f;
    }

    float sunlightScore =
        scores.sunlightScore * profile.sunlightWeight;

    float moistureScore =
        scores.moistureScore * profile.moistureWeight;

    float temperatureScore =
        scores.temperatureScore * profile.temperatureWeight;

    float finalScore =
        (sunlightScore +
         moistureScore +
         temperatureScore) * multiplier;

    if (finalScore < 0.0f)
    {
        finalScore = 0.0f;
    }

    if (finalScore > 100.0f)
    {
        finalScore = 100.0f;
    }

    return finalScore;
}