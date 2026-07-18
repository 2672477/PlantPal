#include "weight_manager.h"

static float clampValue(
    float value,
    float minimum,
    float maximum
)
{
    if (value < minimum) {
        return minimum;
    }

    if (value > maximum) {
        return maximum;
    }

    return value;
}

WeightValidationResult processWeights(
    float weights[],
    int count
)
{
    WeightValidationResult result;

    result.valid = true;
    result.normalized = false;
    result.weightCount = count;

    result.totalWeight = 0.0f;
    result.largestWeight = 0.0f;
    result.smallestWeight = 1.0f;
    result.balanceScore = 0.0f;

    if (count <= 0) {
        result.valid = false;
        return result;
    }

    float total = 0.0f;

    for (int i = 0; i < count; i++) {
        weights[i] = clampValue(weights[i], 0.0f, 1.0f);
        total += weights[i];
    }

    if (total <= 0.0001f) {
        float equalWeight = 1.0f / count;
        for (int i = 0; i < count; i++) {
            weights[i] = equalWeight;
        }

        result.valid = false;
        result.normalized = true;
        result.totalWeight = 1.0f;

        result.largestWeight = equalWeight;
        result.smallestWeight = equalWeight;
        result.balanceScore = 100.0f;

        return result;
    }

    if (total < 0.999f || total > 1.001f) {
        for (int i = 0; i < count; i++) {
            weights[i] /= total;
        }

        result.valid = false;
        result.normalized = true;
    }

    total = 0.0f;

    float largest = weights[0];
    float smallest = weights[0];

    for (int i = 0; i < count; i++) {
        total += weights[i];

        if (weights[i] > largest) {
            largest = weights[i];
        }

        if (weights[i] < smallest) {
            smallest = weights[i];
        }
    }

    result.totalWeight = total;
    result.largestWeight = largest;
    result.smallestWeight = smallest;

    if (largest > 0.0f) {
        result.balanceScore = (smallest / largest) * 100.0f;
    }

    else {
        result.balanceScore = 0.0f;
    }

    if (result.balanceScore > 100.0f) {
        result.balanceScore = 100.0f;
    }

    if (result.balanceScore < 0.0f) {
        result.balanceScore = 0.0f;
    }

    return result;
}