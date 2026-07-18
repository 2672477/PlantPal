#ifndef POWER_MANAGEMENT_H
#define POWER_MANAGEMENT_H

#include "../trend_classification/trend_classification.h"

enum PowerMode {
    POWER_PERFORMANCE,
    POWER_BALANCED,
    POWER_SAVING,
    POWER_ULTRA_SAVING
};

struct PowerManagement {
    PowerMode mode;
    unsigned long sensorInterval;
    unsigned long displayInterval;
    unsigned long ledInterval;
    bool enablePrediction;
    bool enableTrendAnalysis;
    bool enableLED;
    bool enableDisplay;
    float cpuLoad;
};

PowerManagement calculatePowerMode(
    float batteryLevel,
    const TrendClassification& trend,
    bool userPresent
);

#endif