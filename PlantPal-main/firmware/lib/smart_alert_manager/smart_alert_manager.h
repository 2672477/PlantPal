#ifndef SMART_ALERT_MANAGER_H
#define SMART_ALERT_MANAGER_H

#include "../trend_classification/trend_classification.h"
#include "../trend_prediction/trend_prediction.h"
#include "../trend_prediction_confidence/trend_prediction_confidence.h"
#include "../environmental_stability/environmental_stability.h"
#include "../health_confidence/health_confidence.h"
#include "../sensor_diagnostics/sensor_diagnostics.h"
#include "../stress_analysis/stress_analysis.h"

enum AlertSeverity
{
    ALERT_NONE,
    ALERT_LOW,
    ALERT_MEDIUM,
    ALERT_HIGH,
    ALERT_CRITICAL
};

enum AlertReason
{
    ALERT_NO_REASON,

    ALERT_HIGH_STRESS,

    ALERT_LOW_HEALTH,

    ALERT_RAPID_DECLINE,

    ALERT_POOR_ENVIRONMENT,

    ALERT_LOW_CONFIDENCE,

    ALERT_SENSOR_FAILURE,

    ALERT_PREDICTIVE_WARNING
};

struct SensorSystemStatus
{
    const SensorDiagnostics& moisture;
    const SensorDiagnostics& sunlight;
    const SensorDiagnostics& temperature;
};

struct SmartAlert
{
    bool shouldAlert;

    AlertSeverity severity;

    uint8_t priority;

    AlertReason primaryReason;

    AlertReason secondaryReason;

    unsigned long reminderInterval;

    unsigned long nextReminder;

    bool predictive;
};

SmartAlert generateAlert(

    float currentHealth,

    const StressResult& stress,

    const TrendClassification& classification,

    const TrendPrediction& prediction,

    const TrendPredictionConfidence& predictionConfidence,

    const EnvironmentalStability& environment,

    const HealthConfidence& healthConfidence,

    const SensorSystemStatus& sensors,

    unsigned long currentTime
);

#endif