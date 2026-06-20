#include "fallback_logic.h"

bool fallbackMode = false;

bool isFallbackMode() {
    return fallbackMode;
}

void updateFallbackState(bool connected) {
    if (connected) {
        fallbackMode = false;
    }
    else {
        fallbackMode = true;
    }
}