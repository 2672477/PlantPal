#include "trend_analysis.h"

float healthHistory[TREND_HISTORY_SIZE];

int historyIndex = 0;

int totalSamples = 0;

void addHealthScore(float healthScore)
{
    healthHistory[historyIndex] = healthScore;

    historyIndex++;

    if (historyIndex >= TREND_HISTORY_SIZE)
    {
        historyIndex = 0;
    }

    if (totalSamples < TREND_HISTORY_SIZE)
    {
        totalSamples++;
    }
}

float calculateMovingAverage()
{
    float sum = 0.0f;

    for (int i = 0; i < totalSamples; i++)
    {
        sum += healthHistory[i];
    }

    if (totalSamples == 0)
    {
        return 0.0f;
    }

    return sum / totalSamples;
}

float calculateWeightedAverage()
{
    float weightedSum = 0.0f;

    float totalWeight = 0.0f;

    int weight = 1;

    for (int i = 0; i < totalSamples; i++)
    {
        weightedSum += healthHistory[i] * weight;
        totalWeight += weight;
        weight++;
    }

    if (totalWeight == 0.0f)
    {
        return 0.0f;
    }

    return weightedSum / totalWeight;
}

float calculateTrendSlope()
{
    if (totalSamples < 2)
    {
        return 0.0f;
    }

    float oldestScore = healthHistory[0];

    float newestScore = healthHistory[totalSamples - 1];

    return newestScore - oldestScore;
}

float calculateVolatility()
{
    float movingAverage = calculateMovingAverage();

    float variance = 0.0f;

    for (int i = 0; i < totalSamples; i++)
    {
        float difference = healthHistory[i] - movingAverage;
        variance += difference * difference;
    }

    if (totalSamples == 0)
    {
        return 0.0f;
    }

    return variance / totalSamples;
}

float predictFutureHealth(int futureSteps)
{
    if (totalSamples == 0)
    {
        return 0.0f;
    }

    float currentHealth =
        healthHistory[totalSamples - 1];

    float slope =
        calculateTrendSlope();

    float predictedHealth =
        currentHealth + (slope * futureSteps);

    if (predictedHealth > 100.0f)
    {
        predictedHealth = 100.0f;
    }
    else if (predictedHealth < 0.0f)
    {
        predictedHealth = 0.0f;
    }

    return predictedHealth;
}

TrendState getTrendState()
{
    float slope = calculateTrendSlope();

    if (slope >= 10.0f)
    {
        return IMPROVING;
    }
    else if (slope <= -20.0f)
    {
        return RAPID_DECLINE;
    }
    else if (slope < -5.0f)
    {
        return DECLINING;
    }
    else
    {
        return STABLE_TREND;
    }
}