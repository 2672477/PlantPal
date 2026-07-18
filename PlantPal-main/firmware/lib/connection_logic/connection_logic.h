#ifndef CONNECTION_LOGIC_H
#define CONNECTION_LOGIC_H

#include "../utils/types.h"

bool isConnected();

void updateHeartbeat();

void checkConnectionTimeout(
    unsigned long currentTime,
    unsigned long timeoutDuration
);

#endif 