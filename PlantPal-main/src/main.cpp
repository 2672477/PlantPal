#include <Arduino.h>

#include <types.h>
#include <constants.h>

#include <moisture.h>
#include <sunlight.h>
#include <temperature.h>

#include <wifi_manager.h>
#include <node_identity.h>

#include <sensor_normalizer.h>
#include <sensor_score_calculator.h>
#include <score_calculator.h>

#include <emotion_logic.h>
#include <hysteresis.h>

#include <trend_analysis.h>

#include <water_recovery.h>

#include <led_accent.h>

#include <smart_alerts.h>

#include <fallback_logic.h>

#include <mesophyte.h>

PlantProfile activeProfile =
    mesophyteProfile;

float anchorHealthScore =
    100.0;

Emotion activeEmotion =
    THRIVING;

void setup()
{
    Serial.begin(115200);

    initializeNodeID();

    initializeWiFi(
        "YOUR_WIFI_SSID",
        "YOUR_WIFI_PASSWORD"
    );

    initialMoistureSensor();

    initializeSunlightSensor();

    initializeTemperatureSensor();

    initializedLedAccent();
}

void loop()
{
    reconnectWiFi();

    SensorData sensorData;

    sensorData.moisture =
        readMoistureValue();

    sensorData.sunlight =
        readSunlightValue();

    sensorData.temperature =
        readTemperatureValue();

    float normalizedMoisture =
        normalizeValue(
            sensorData.moisture,
            RAW_MOISTURE_MIN,
            RAW_MOISTURE_MAX
        );

    float normalizedSunlight =
        normalizeValue(
            sensorData.sunlight,
            RAW_SUNLIGHT_MIN,
            RAW_SUNLIGHT_MAX
        );

    float normalizedTemperature =
        normalizeValue(
            sensorData.temperature,
            RAW_TEMPERATURE_MIN,
            RAW_TEMPERATURE_MAX
        );

    SensorScore scores;

    scores.moistureScore =
        calculateSensorScore(
            normalizedMoisture,
            activeProfile.moistureMin,
            activeProfile.moistureMax,
            1.0
        );

    scores.sunlightScore =
        calculateSensorScore(
            normalizedSunlight,
            activeProfile.sunlightMin,
            activeProfile.sunlightMax,
            1.0
        );

    scores.temperatureScore =
        calculateSensorScore(
            normalizedTemperature,
            activeProfile.temperatureMin,
            activeProfile.temperatureMax,
            1.0
        );

    float currentHealthScore =
        calculateHealthScore(
            scores,
            activeProfile,
            1.0
        );

    addHealthScore(
        currentHealthScore
    );

    Emotion candidateEmotion =
        getEmotionFromScore(
            currentHealthScore
        );

    if (
        shouldUpdateEmotion(
            anchorHealthScore,
            currentHealthScore,
            activeEmotion,
            candidateEmotion
        )
    )
    {
        activeEmotion =
            candidateEmotion;

        anchorHealthScore =
            currentHealthScore;
    }

    if (isRecoveryActive())
    {
        activeEmotion =
            updateRecovery();
    }

    updatedLEDAccent(
        activeEmotion
    );

    updateFallbackState(
        isWiFiConnected()
    );

    if (
        shouldSendAlert(
            currentHealthScore,
            activeEmotion
        )
    )
    {
        recordAlertSent();
    }

    Serial.print(
        "Health Score: "
    );

    Serial.println(
        currentHealthScore
    );

    Serial.print(
        "Predicted Health: "
    );

    Serial.println(
        predictFutureHealth(3)
    );

    delay(1000);
}