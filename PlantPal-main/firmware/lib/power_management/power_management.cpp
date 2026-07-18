#include "power_management.h"

constexpr unsigned long SENSOR_FAST = 1000;
constexpr unsigned long SENSOR_NORMAL = 5000;
constexpr unsigned long SENSOR_SLOW = 15000;
constexpr unsigned long SENSOR_ULTRA = 30000;

constexpr unsigned long DISPLAY_FAST = 1000;
constexpr unsigned long DISPLAY_NORMAL = 5000;
constexpr unsigned long DISPLAY_SLOW = 10000;
constexpr unsigned long DISPLAY_OFF = 60000;

constexpr unsigned long LED_FAST = 100;
constexpr unsigned long LED_NORMAL = 500;
constexpr unsigned long LED_SLOW = 2000;
constexpr unsigned long LED_OFF = 100000;

PowerManagement calculatePowerMode(
    float batteryLevel,
    const TrendClassification& trend,
    bool userPresent
)
{
    PowerManagement result{};

    result.mode = POWER_BALANCED;

    result.sensorInterval = SENSOR_NORMAL;
    result.displayInterval = DISPLAY_NORMAL;
    result.ledInterval = LED_NORMAL;

    result.enablePrediction = true;
    result.enableTrendAnalysis = true;
    result.enableLED = true;
    
    result.cpuLoad = 1.0f;

    if (trend.trend == TREND_CRITICAL_DECLINE || trend.trend == TREND_STRESSED) {
        result.mode = POWER_PERFORMANCE;

        result.sensorInterval = SENSOR_FAST;
        result.displayInterval = DISPLAY_FAST;
        result.ledInterval = LED_FAST;

        result.cpuLoad = 1.0f;

        return result;
    }

    if (batteryLevel < 20.0f) {
        result.mode = POWER_ULTRA_SAVING;

        result.sensorInterval = SENSOR_ULTRA;
        result.displayInterval = DISPLAY_OFF;
        result.ledInterval = LED_OFF;

        result.enableLED = false;
        result.enableDisplay = false;

        result.enablePrediction = false;

        result.cpuLoad = 0.25f;

        return result;
    }

    if (batteryLevel < 40.0f) {
        result.mode = POWER_SAVING;

        result.sensorInterval = SENSOR_SLOW;
        result.displayInterval = DISPLAY_SLOW;
        result.ledInterval = LED_SLOW;

        result.enableLED = true;
        result.enableDisplay = true;

        result.enablePrediction = false;

        result.cpuLoad = 0.50f;

        return result;
    }

    if(!userPresent) {
        result.sensorInterval = SENSOR_SLOW;
        result.displayInterval = DISPLAY_OFF;
        result.ledInterval = LED_OFF;
        
        result.enableLED = false;
        result.enableDisplay = false;

        result.cpuLoad = 0.60f;
    }

    return result;
}