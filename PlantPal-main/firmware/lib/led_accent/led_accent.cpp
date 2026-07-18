#include "led_accent.h"
#include <FastLED.h>

#define LED_PIN 5
#define NUM_LEDS 5
#define BRIGHTNESS 60

CRGB leds[NUM_LEDS];    

CRGB currentColor = CRGB(0, 0, 0);
CRGB targetColor = CRGB(0, 0, 0);

unsigned long lastFadeUpdate = 0;
const int fadeInterval = 30;

void initializedLedAccent() {
    FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
    FastLED.setBrightness(BRIGHTNESS);
    FastLED.clear();
    FastLED.show();   
}

void updatedLEDAccent(Emotion emotion) {
    if(emotion == THRIVING) {
        targetColor = CRGB(85, 214, 122);
    }
    else if(emotion == HEALTHY) {
        targetColor = CRGB(190, 227, 186);
    }
    else if(emotion == STABLE) {
        targetColor = CRGB(219, 255, 230);
    }
    else if(emotion == CONCERNING) {
        targetColor = CRGB(251, 203, 178);
    }
    else if(emotion == CRITICAL) {
        targetColor = CRGB(236, 83, 83);
    }
}

void updateLEDFade() {
    if (millis() - lastFadeUpdate >= fadeInterval) {
       lastFadeUpdate = millis();
       currentColor = blend(currentColor, targetColor, 20);
       fill_solid(leds, NUM_LEDS, currentColor);
       
       FastLED.show();
    }
}
