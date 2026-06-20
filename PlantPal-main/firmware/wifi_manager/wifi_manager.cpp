#include "wifi_manager.h"

#include <Arduino.h>
#include <WiFi.h>

const char* storedSSID = nullptr;

const char* storedPassword = nullptr;

void initializeWiFi(
    const char* ssid,
    const char* password
)

{
    storedSSID = ssid;

    storedPassword = password;

    WiFi.begin(
        storedSSID,
        storedPassword
    );
}

bool isWiFiConnected()
{
    return (
        WiFi.status() ==
        WL_CONNECTED
    );
}

void reconnectWiFi()
{
    if (
        WiFi.status() !=
        WL_CONNECTED
    )

    {
        WiFi.disconnect();

        WiFi.begin(
            storedSSID,
            storedPassword
        );
    }
}