#ifndef ADC_FILTER_H
#define ADC_FILTER_H

#define FILTER_SIZE 10

struct ADCFilterConfig
{
    int windowSize;

    float alpha;

    bool enableMedian;

    bool enableMovingAverage;

    bool enableExponential;
};

struct ADCFilter
{
    // Raw ADC samples
    float rawSamples[FILTER_SIZE];

    int rawIndex;

    int rawCount;

    // Median filter history
    float medianSamples[FILTER_SIZE];

    int medianIndex;

    int medianCount;

    // Moving average
    float runningSum;

    // Exponential smoothing
    float filteredValue;

    ADCFilterConfig config;
};

void initializeFilter(
    ADCFilter& filter,
    ADCFilterConfig config
);

float updateFilter(
    ADCFilter& filter,
    float newSample
);

#endif