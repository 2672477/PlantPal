#include "connection_logic.h"

bool connected = false;

unsigned long lastHeartbeatTime = 0;

bool isConnected() {
    return connected;
}

void updateHeartbeat() {
    lastHeartbeatTime = millis();
}

void checkConnectionTimeout(unsigned long currentTime, unsigned long timeoutDuration) {
    if (currentTime - lastHeartbeatTime > timeoutDuration) {
        connected = false;
    }
}


