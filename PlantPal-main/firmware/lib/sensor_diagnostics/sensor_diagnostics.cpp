#include "sensor_diagnostics.h"

static float absoluteValue(float value)
{
    return (value < 0.0f) ? -value : value;
}

void initializeDiagnostics(
    SensorDiagnostics& diagnostics,
    float minimumValid,
    float maximumValid,
    float stuckTolerance,
    float unstableThreshold
)
{
    diagnostics.index = 0;
    diagnostics.sampleCount = 0;

    diagnostics.minimumValid = minimumValid;
    diagnostics.maximumValid = maximumValid;

    diagnostics.stuckTolerance = stuckTolerance;
    diagnostics.unstableThreshold = unstableThreshold;

    diagnostics.average = 0.0f;
    diagnostics.variance = 0.0f;

    diagnostics.confidence = 100.0f;
    diagnostics.status = SENSOR_OK;

    for (int i = 0; i < SENSOR_HISTORY_SIZE; i++)
    {
        diagnostics.history[i] = 0.0f;
    }
}

SensorStatus analyzeSensor(
    SensorDiagnostics& diagnostics,
    float value
)
{

    diagnostics.history[diagnostics.index] = value;

    diagnostics.index++;

    if (diagnostics.index >= SENSOR_HISTORY_SIZE)
    {
        diagnostics.index = 0;
    }

    if (diagnostics.sampleCount < SENSOR_HISTORY_SIZE)
    {
        diagnostics.sampleCount++;
    }

    if (
        value < diagnostics.minimumValid ||
        value > diagnostics.maximumValid
    )
    {
        diagnostics.status = SENSOR_INVALID;
        diagnostics.confidence = 0.0f;

        return diagnostics.status;
    }

    const float disconnectMargin = 0.005f;

    if (
        value <= diagnostics.minimumValid + disconnectMargin ||
        value >= diagnostics.maximumValid - disconnectMargin
    )
    {
        diagnostics.status = SENSOR_DISCONNECTED;
        diagnostics.confidence = 0.0f;

        return diagnostics.status;
    }

    if (diagnostics.sampleCount < SENSOR_HISTORY_SIZE)
    {
        diagnostics.status = SENSOR_OK;
        diagnostics.confidence = 100.0f;

        return diagnostics.status;
    }

    diagnostics.average = 0.0f;

    for (int i = 0; i < SENSOR_HISTORY_SIZE; i++)
    {
        diagnostics.average += diagnostics.history[i];
    }

    diagnostics.average /= SENSOR_HISTORY_SIZE;

    diagnostics.variance = 0.0f;

    for (int i = 0; i < SENSOR_HISTORY_SIZE; i++)
    {
        float difference =
            diagnostics.history[i] -
            diagnostics.average;

        diagnostics.variance +=
            difference * difference;
    }

    diagnostics.variance /= SENSOR_HISTORY_SIZE;

    bool stuck = true;

    for (int i = 1; i < SENSOR_HISTORY_SIZE; i++)
    {
        if (
            absoluteValue(
                diagnostics.history[i] -
                diagnostics.history[0]
            ) > diagnostics.stuckTolerance
        )
        {
            stuck = false;
            break;
        }
    }

    if (stuck)
    {
        diagnostics.status = SENSOR_STUCK;
        diagnostics.confidence = 10.0f;

        return diagnostics.status;
    }

    if (diagnostics.variance > diagnostics.unstableThreshold)
    {
        diagnostics.status = SENSOR_UNSTABLE;

        diagnostics.confidence =
            100.0f -
            (diagnostics.variance * 100.0f);

        if (diagnostics.confidence < 0.0f)
        {
            diagnostics.confidence = 0.0f;
        }

        return diagnostics.status;
    }

    diagnostics.status = SENSOR_OK;

    diagnostics.confidence =
        100.0f -
        (diagnostics.variance * 100.0f);

    if (diagnostics.confidence > 100.0f)
    {
        diagnostics.confidence = 100.0f;
    }

    if (diagnostics.confidence < 0.0f)
    {
        diagnostics.confidence = 0.0f;
    }

    return diagnostics.status;
}

float getSensorConfidence(
    const SensorDiagnostics& diagnostics
)
{
    return diagnostics.confidence;
}