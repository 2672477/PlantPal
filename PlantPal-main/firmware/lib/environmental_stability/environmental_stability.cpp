#include "environmental_stability.h"

constexpr float MAX_SCORE = 100.0f;
constexpr float STABLE_THRESHOLD = 80.0f;

constexpr float SUNLIGHT_VARIANCE_FACTOR = 10.0f;
constexpr float MOISTURE_VARIANCE_FACTOR = 12.0f;
constexpr float TEMPERATURE_VARIANCE_FACTOR = 8.0f;

static float sunlightHistory[STABILITY_HISTORY_SIZE];
static float moistureHistory[STABILITY_HISTORY_SIZE];
static float temperatureHistory[STABILITY_HISTORY_SIZE];

static int historyIndex = 0;
static int sampleCount = 0;

static float clamp(float value) {
    if (value < 0.0f) {
        return 0.0f;
    }

    if (value > MAX_SCORE) {
        return MAX_SCORE;
    }

    return value;
}

static float calculateVaraince(
    const float history[],
    int samples
)
{
    if (samples == 0) {
        return 0.0f;
    }

    float average = 0.0f;

    for (int i = 0; i < samples; i++) {
        average += history[i];
    }

    average /= samples;

    float variance = 00.0f;
    for (int i = 0; i < samples; i++) {
        float difference = history[i] - average;
        variance += difference * difference;
    }

    return variance / samples;
}

void initializeEnvironmentalStability(){
    historyIndex = 0;
    sampleCount = 0;

    for (int i = 0; i < STABILITY_HISTORY_SIZE; i++) {
        sunlightHistory[i] = 0.0f;
        moistureHistory[i] = 0.0f;
        temperatureHistory[i] = 0.0f;
    }
}

EnvironmentalStability calculateEnvironmentalStability(
    float sunlight,
    float moisture,
    float temperature,
    const PlantProfile& profile
)
{
    EnvironmentalStability result{} ;

    sunlightHistory[historyIndex] = sunlight;
    moistureHistory[historyIndex] = moisture;
    temperatureHistory[historyIndex] = temperature;

    historyIndex++;

    if (historyIndex >= STABILITY_HISTORY_SIZE) {
        historyIndex = 0;
    }

    if (sampleCount < STABILITY_HISTORY_SIZE) {
        sampleCount++;
    }

    float sunlightVariance = calculateVaraince(sunlightHistory, sampleCount);
    float moistureVariance = calculateVaraince(moistureHistory, sampleCount);
    float temperatureVariance = calculateVaraince(temperatureHistory, sampleCount);

    result.sunlightStability = clamp(100.0f - sunlightVariance * SUNLIGHT_VARIANCE_FACTOR);
    result.moistureStability = clamp(100.0f - moistureVariance * MOISTURE_VARIANCE_FACTOR);
    result.temperatureStability = clamp(100.0f - temperatureVariance * TEMPERATURE_VARIANCE_FACTOR);

    float totalWeight = profile.sunlightWeight + profile.moistureWeight + profile.temperatureWeight;

    if (totalWeight <= 0.0f) {
        totalWeight = 1.0f;
    }

    result.stabilityScore = (result.sunlightStability * profile.sunlightWeight + result.moistureStability * profile.moistureWeight + result.temperatureStability * profile.temperatureWeight) / totalWeight;

    result.stable = (result.stabilityScore >= STABLE_THRESHOLD);

    return result;
}