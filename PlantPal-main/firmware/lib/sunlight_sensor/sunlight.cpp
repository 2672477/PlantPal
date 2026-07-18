#include "sunlight.h"

#define SUNLIGHT_SENSOR_PIN 35

void initializeSunlightSensor() {

}

float readSunlightValue() {
    float sunlightValue = analogRead(SUNLIGHT_SENSOR_PIN);

    return sunlightValue;
}