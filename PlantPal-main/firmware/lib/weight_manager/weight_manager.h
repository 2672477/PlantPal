#ifndef WEIGHT_MANAGER_H
#define WEIGHT_MANAGER_H

struct WeightValidationResult {
    bool valid;
    bool normalized;
    float totalWeight;
    int weightCount;
    float largestWeight;
    float smallestWeight;
    float balanceScore;
};

WeightValidationResult validateWeights(
    float weights[],
    int count
);

#endif