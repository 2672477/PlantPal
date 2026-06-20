#include "sleep_awareness.h"

static bool SleepMode = false;

bool isSleepMode() {
    return SleepMode;
}

void updateSleepState(int currentHour) {
    if (currentHour >= 22 || currentHour < 7) {
        SleepMode = true;
    } else {
        SleepMode = false;
    }
}