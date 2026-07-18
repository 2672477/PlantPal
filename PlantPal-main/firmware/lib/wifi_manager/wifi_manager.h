#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

void initializeWiFi(
    const char* ssid,
    const char* password
);

bool isWiFiConnected();

void reconnectWiFi();

#endif