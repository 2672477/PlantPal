#include "moisture.h"

#define MOISTURE_SENSOR_PIN 36

void initializeMoistureSensor() {

}

float readMoistureValue() {
    float moistureValue = analogRead(MOISTURE_SENSOR_PIN);

    return moistureValue;
}
