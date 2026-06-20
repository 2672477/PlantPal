#include "smart_alerts.h"

#include <Arduino.h>

unsigned long lastAlertTime = 0;

const unsigned long ALERT_COOLDOWN =
    1800000;

bool shouldSendAlert(
    float healthScore,
    Emotion emotion
)

{
    if (
        millis() -
        lastAlertTime <
        ALERT_COOLDOWN
    )

    {
        return false;
    }

    if (
        emotion == CRITICAL
    )

    {
        return true;
    }

    if (
        emotion == CONCERNING &&
        healthScore <= 30.0
    )

    {
        return true;
    }

    return false;
}

void recordAlertSent()
{
    lastAlertTime =
        millis();
}