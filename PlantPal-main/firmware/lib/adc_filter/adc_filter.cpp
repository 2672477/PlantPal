#include "adc_filter.h"

static void sortArray(
    float values[],
    int size
)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (values[i] > values[j])
            {
                float temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }
}

void initializeFilter(
    ADCFilter& filter,
    ADCFilterConfig config
)
{
    filter.config = config;

    if (filter.config.windowSize <= 0)
    {
        filter.config.windowSize = FILTER_SIZE;
    }

    if (filter.config.windowSize > FILTER_SIZE)
    {
        filter.config.windowSize = FILTER_SIZE;
    }

    filter.rawIndex = 0;
    filter.rawCount = 0;

    filter.medianIndex = 0;
    filter.medianCount = 0;

    filter.runningSum = 0.0f;
    filter.filteredValue = 0.0f;

    for (int i = 0; i < FILTER_SIZE; i++)
    {
        filter.rawSamples[i] = 0.0f;
        filter.medianSamples[i] = 0.0f;
    }
}

float updateFilter(
    ADCFilter& filter,
    float newSample
)
{

    filter.rawSamples[filter.rawIndex] = newSample;

    filter.rawIndex++;

    if (filter.rawIndex >= filter.config.windowSize)
    {
        filter.rawIndex = 0;
    }

    if (filter.rawCount < filter.config.windowSize)
    {
        filter.rawCount++;
    }

    float medianValue = newSample;

    if (filter.config.enableMedian)
    {
        float sorted[FILTER_SIZE];

        for (int i = 0; i < filter.rawCount; i++)
        {
            sorted[i] = filter.rawSamples[i];
        }

        sortArray(sorted, filter.rawCount);

        if (filter.rawCount > 0)
        {
            if ((filter.rawCount % 2) == 0)
            {
                medianValue =
                    (
                        sorted[(filter.rawCount / 2) - 1] +
                        sorted[filter.rawCount / 2]
                    ) * 0.5f;
            }
            else
            {
                medianValue =
                    sorted[filter.rawCount / 2];
            }
        }
    }

    float averageValue = medianValue;

    if (filter.config.enableMovingAverage)
    {
        filter.runningSum -=
            filter.medianSamples[filter.medianIndex];

        filter.medianSamples[filter.medianIndex] =
            medianValue;

        filter.runningSum +=
            medianValue;

        filter.medianIndex++;

        if (filter.medianIndex >= filter.config.windowSize)
        {
            filter.medianIndex = 0;
        }

        if (filter.medianCount < filter.config.windowSize)
        {
            filter.medianCount++;
        }

        averageValue =
            filter.runningSum /
            filter.medianCount;
    }

    float output = averageValue;

    if (filter.config.enableExponential)
    {
        if (filter.filteredValue == 0.0f)
        {
            filter.filteredValue = averageValue;
        }
        else
        {
            filter.filteredValue =
                (filter.config.alpha * averageValue) +
                ((1.0f - filter.config.alpha) * filter.filteredValue);
        }

        output = filter.filteredValue;
    }

    return output;
}