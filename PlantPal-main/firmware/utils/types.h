#ifndef TYPES_H
#define TYPES_H

#include <Arduino.h>

enum Emotion
{
    THRIVING,
    HEALTHY,
    STABLE,
    CONCERNING,
    CRITICAL
};

enum TrendState
{
    IMPROVING,
    STABLE_TREND,
    DECLINING,
    RAPID_DECLINE
};

struct SensorData
{
    float moisture;
    float sunlight;
    float temperature;
};

struct SensorScore
{
    float sunlightScore;
    float moistureScore;
    float temperatureScore;
};

struct HealthResult
{
    float healthScore;
    Emotion emotion;
};

struct NodeStatus
{
    String nodeID;
    String plantType;
    float healthScore;
    unsigned long lastAlertTime;
};

#endif // TYPES_H