#ifndef SMART_ALERTS_H
#define SMART_ALERTS_H

#include "../utils/types.h"

bool shouldSendAlert(
    float healthScore,
    Emotion emotion
);

void recordAlertSent();

#endif