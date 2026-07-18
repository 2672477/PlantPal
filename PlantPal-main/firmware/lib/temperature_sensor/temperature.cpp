#include "temperature.h"

#define TEMPERATURE_SENSOR_PIN 34

void initializeTemperatureSensor(){

}

float readTemperatureValue(){
    float temperatureValue = analogRead(TEMPERATURE_SENSOR_PIN);

    return temperatureValue;
}