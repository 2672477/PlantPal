#ifndef SLEEP_AWARENESS_H
#define SLEEP_AWARENESS_H

#include "../utils/types.h"

bool isSleepMode();

void updateSleepState(
    int currentHour
);

#endif