#include <Arduino.h>
#include <FastLED.h>
#include "../lib/debug/debug.h"
#include "../lib/scheduler/scheduler.h"
#include "../lib/moisture_sensor/moisture.h"
#include "../lib/sunlight_sensor/sunlight.h"
#include "../lib/temperature_sensor/temperature.h"
#include "../lib/adc_filter/adc_filter.h"
#include "../lib/sensor_calibration/sensor_calibration.h"
#include "../lib/sensor_normalizer/sensor_normalizer.h"
#include "../lib/sensor_diagnostics/sensor_diagnostics.h"
#include "../lib/sensor_reliability/sensor_reliability.h"
#include "../lib/adaptive_health_curve/adaptive_health_curve.h"
#include "../lib/sensor_score_calculator/sensor_score_calculator.h"
#include "../lib/score_calculator/score_calculator.h"
#include "../lib/stress_analysis/stress_analysis.h"
#include "../lib/health_confidence/health_confidence.h"
#include "../lib/dynamic_recovery/dynamic_recovery.h"
#include "../lib/trend_analysis/trend_analysis.h"
#include "../lib/trend_prediction/trend_prediction.h"
#include "../lib/trend_prediction_confidence/trend_prediction_confidence.h"
#include "../lib/environmental_stability/environmental_stability.h"
#include "../lib/trend_classification/trend_classification.h"
#include "../lib/smart_alert_manager/smart_alert_manager.h"
#include "../lib/emotion_logic/emotion_logic.h"
#include "../lib/led_accent/led_accent.h"
#include "../lib/connection_logic/connection_logic.h"
#include "../lib/fallback_logic/fallback_logic.h"
#include "../lib/plant_profiles/plant_profile.h"
#include "../lib/plant_profiles/xeropyhte.h"
#include "../lib/plant_profiles/mesophyte.h"
#include "../lib/plant_profiles/hygropyhte.h"
#include "../lib/plant_profiles/hydropyhte.h"
#include "../lib/plant_profiles/halopyhte.h"

PlantProfile currentPlant = mesophyteProfile;

float rawMoisture = 0.0f;
float rawSunlight = 0.0f;
float rawTemperature = 0.0f;
float normalizedMoisture = 0.0f;
float normalizedSunlight = 0.0f;
float normalizedTemperature = 0.0f;

SensorScore sensorScores;

HealthResult healthResult;

StressResult stressResult;

HealthConfidence healthConfidence;

RecoveryResult recoveryResult;

TrendPrediction trendPrediction;

TrendPredictionConfidence trendPredictionConfidence;

EnvironmentalStability environmentalStability;

TrendClassification trendClassification;

SmartAlert smartAlert;

SensorCalibration moistureCalibration;
SensorCalibration sunlightCalibration;
SensorCalibration temperatureCalibration;

SensorDiagnostics moistureDiagnostics;
SensorDiagnostics sunlightDiagnostics;
SensorDiagnostics temperatureDiagnostics;

ADCFilter moistureFilter;
ADCFilter sunlightFilter;
ADCFilter temperatureFilter;

ScheduledTask sensorTask;
ScheduledTask healthTask;
ScheduledTask trendTask;
ScheduledTask alertTask;
ScheduledTask displayTask;
ScheduledTask ledTask;
ScheduledTask wifiTask;
ScheduledTask debugTask;

void setup();
void loop();

void updateSensors();
void processCalibration();
void processFiltering();
void processDiagnostics();
void processReliability();

void processAdaptiveHealth();
void processSensorScores();
void processHealthScore();
void processStressAnalysis();
void processHealthConfidence();

void processTrendAnalysis();
void processRecovery();
void processTrendPrediction();
void processPredictionConfidence();
void processEnvironmentalStability();
void processTrendClassification();
void processSmartAlerts();

void updateOLED();
void updateLEDAccent();
void updateWiFi();
void debugOutput();

SensorReliability moistureReliability;
SensorReliability sunlightReliability;
SensorReliability temperatureReliability;

void setup()
{
    DEBUG_BEGIN(115200);

    DEBUG_INFO_PRINTLN("");
    DEBUG_INFO_PRINTLN("====================================");
    DEBUG_INFO_PRINTLN("PlantPal Booting...");
    DEBUG_INFO_PRINTLN("====================================");

    initializeMoistureSensor();

    initializeSunlightSensor();

    initializeTemperatureSensor();

    initializeTask(sensorTask,1000);

    initializeTask(healthTask,1000);

    initializeTask(trendTask,5000);

    initializeTask(alertTask,5000);

    initializeTask(displayTask,500);

    initializeTask(ledTask,50);

    initializeTask(wifiTask,10000);

    initializeTask(debugTask,1000);

    DEBUG_INFO_PRINTLN("Initialization Complete.");
}

void updateSensors()
{
    rawMoisture = readMoistureValue();
    rawSunlight = readSunlightValue();
    rawTemperature = readTemperatureValue();
}

void processCalibration()
{
    updateCalibration(
        moistureCalibration,
        rawMoisture
    );

    updateCalibration(
        sunlightCalibration,
        rawSunlight
    );

    updateCalibration(
        temperatureCalibration,
        rawTemperature
    );
}

void processFiltering()
{
    rawMoisture =
        updateFilter(
            moistureFilter,
            rawMoisture
        );

    rawSunlight =
        updateFilter(
            sunlightFilter,
            rawSunlight
        );

    rawTemperature =
        updateFilter(
            temperatureFilter,
            rawTemperature
        );
}

void processDiagnostics()
{
    analyzeSensor(
        moistureDiagnostics,
        rawMoisture
    );

    analyzeSensor(
        sunlightDiagnostics,
        rawSunlight
    );

    analyzeSensor(
        temperatureDiagnostics,
        rawTemperature
    );
}

void processReliability()
{
    float calibratedMoisture =
        getCalibratedValue(
            rawMoisture,
            moistureCalibration
        );

    float calibratedSunlight =
        getCalibratedValue(
            rawSunlight,
            sunlightCalibration
        );

    float calibratedTemperature =
        getCalibratedValue(
            rawTemperature,
            temperatureCalibration
        );

    normalizedMoisture =
        normalizeValue(
            calibratedMoisture,
            moistureCalibration.minimumValue,
            moistureCalibration.maximumValue
        );

    normalizedSunlight =
        normalizeValue(
            calibratedSunlight,
            sunlightCalibration.minimumValue,
            sunlightCalibration.maximumValue
        );

    normalizedTemperature =
        normalizeValue(
            calibratedTemperature,
            temperatureCalibration.minimumValue,
            temperatureCalibration.maximumValue
        );

    SensorReliability moistureReliability =
        calculateReliability(
            moistureDiagnostics,
            moistureCalibration
        );

    SensorReliability sunlightReliability =
        calculateReliability(
            sunlightDiagnostics,
            sunlightCalibration
        );

    SensorReliability temperatureReliability =
        calculateReliability(
            temperatureDiagnostics,
            temperatureCalibration
        );

    normalizedMoisture *=
        moistureReliability.reliabilityScore;

    normalizedSunlight *=
        sunlightReliability.reliabilityScore;

    normalizedTemperature *=
        temperatureReliability.reliabilityScore;
}

void processAdaptiveHealth()
{
    sensorScores.moistureScore =
        calculateAdaptiveHealth(
            normalizedMoisture,
            currentPlant.moistureCurve
        );

    sensorScores.sunlightScore =
        calculateAdaptiveHealth(
            normalizedSunlight,
            currentPlant.sunlightCurve
        );

    sensorScores.temperatureScore =
        calculateAdaptiveHealth(
            normalizedTemperature,
            currentPlant.temperatureCurve
        );
}

void processSensorScores()
{
    sensorScores.moistureScore =
        calculateSensorScore(
            sensorScores.moistureScore,
            currentPlant.moistureCurve
        );

    sensorScores.sunlightScore =
        calculateSensorScore(
            sensorScores.sunlightScore,
            currentPlant.sunlightCurve
        );

    sensorScores.temperatureScore =
        calculateSensorScore(
            sensorScores.temperatureScore,
            currentPlant.temperatureCurve
        );
}

void processStressAnalysis()
{
    stressResult =
        calculateStressIndex(
            normalizedMoisture,
            normalizedSunlight,
            normalizedTemperature,
            currentPlant
        );
}

void processHealthScore()
{
    healthResult.healthScore =
        calculateHealthScore(
            sensorScores,
            currentPlant,
            stressResult.healthMultiplier
        );

    healthResult.emotion =
        getEmotionFromScore(
            healthResult.healthScore
        );
}

void processHealthConfidence()
{
    healthConfidence =
        calculateHealthConfidence(

            moistureReliability.reliabilityScore,

            sunlightReliability.reliabilityScore,

            temperatureReliability.reliabilityScore,

            moistureCalibration,

            sunlightCalibration,

            temperatureCalibration,

            sensorScores.moistureScore,

            sensorScores.sunlightScore,

            sensorScores.temperatureScore,

            stressResult.stressIndex
        );
}

void processTrendAnalysis()
{
    addHealthScore(
        healthResult.healthScore
    );
}

void processRecovery()
{
    recoveryResult =
        calculateRecovery(
            healthResult.healthScore,
            stressResult.stressIndex,
            healthConfidence,
            getTrendState(),
            currentPlant
        );
}

void processTrendPrediction()
{
    trendPrediction =
        predictTrend(
            healthResult.healthScore,
            healthConfidence,
            recoveryResult
        );
}

void processPredictionConfidence()
{
    trendPredictionConfidence =
        calculateTrendPredictionConfidence(
            healthConfidence,
            recoveryResult,
            24.0f
        );
}

void processEnvironmentalStability()
{
    environmentalStability =
        calculateEnvironmentalStability(
            normalizedSunlight,
            normalizedMoisture,
            normalizedTemperature,
            currentPlant
        );
}

void processTrendClassification()
{
    trendClassification =
        classifyPlantState(
            healthResult.healthScore,
            stressResult.stressIndex,
            trendPrediction,
            trendPredictionConfidence,
            environmentalStability
        );
}

void processSmartAlerts()
{
    SensorSystemStatus sensorStatus{
        moistureDiagnostics,
        sunlightDiagnostics,
        temperatureDiagnostics
    };

    smartAlert =
        generateAlert(
            healthResult.healthScore,
            stressResult,
            trendClassification,
            trendPrediction,
            trendPredictionConfidence,
            environmentalStability,
            healthConfidence,
            sensorStatus,
            millis()
        );
}

void updateOLED()
{
    
    //  OLED code goes here later.
    
}

void updateLEDAccent()
{
    updatedLEDAccent(
        healthResult.emotion
    );
}

void updateWiFi()
{
    //    Future WiFi / cloud sync
}

void debugOutput()
{
    DEBUG_INFO_PRINTLN("--------------------------------");

    DEBUG_INFO_PRINT("Health : ");
    DEBUG_INFO_PRINTLN(healthResult.healthScore);

    DEBUG_INFO_PRINT("Stress : ");
    DEBUG_INFO_PRINTLN(stressResult.stressIndex);

    DEBUG_INFO_PRINT("Prediction : ");
    DEBUG_INFO_PRINTLN(
        trendPrediction.confidenceAdjustedPrediction
    );

    DEBUG_INFO_PRINT("Confidence : ");
    DEBUG_INFO_PRINTLN(
        healthConfidence.overallConfidence
    );

    DEBUG_INFO_PRINT("Alert : ");
    DEBUG_INFO_PRINTLN(
        smartAlert.severity
    );

    DEBUG_INFO_PRINTLN("--------------------------------");
}

void loop()
{
    if (shouldRunTask(sensorTask))
    {
        updateSensors();

        processCalibration();

        processFiltering();

        processDiagnostics();

        processReliability();
    }

    if (shouldRunTask(healthTask))
    {
        processAdaptiveHealth();

        processSensorScores();

        processStressAnalysis();

        processHealthScore();

        healthResult.emotion =
            getEmotionFromScore(
                healthResult.healthScore
            );

        processHealthConfidence();
    }

    if (shouldRunTask(trendTask))
    {
        processTrendAnalysis();

        processRecovery();

        processTrendPrediction();

        processPredictionConfidence();

        processEnvironmentalStability();

        processTrendClassification();
    }

    if (shouldRunTask(alertTask))
    {
        processSmartAlerts();
    }

    if (shouldRunTask(displayTask))
    {
        updateOLED();
    }

    if (shouldRunTask(ledTask))
    {
        updateLEDAccent();
    }

    if (shouldRunTask(wifiTask))
    {
        updateWiFi();
    }

    if (shouldRunTask(debugTask))
    {
        debugOutput();
    }
}
