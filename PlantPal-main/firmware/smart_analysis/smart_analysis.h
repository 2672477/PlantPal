#ifndef SMART_ANALYSIS_H
#define SMART_ANALYSIS_H

#include "../utils/types.h"
#include <Arduino.h>

int getHighestPriorityNode(
    NodeStatus nodes[],
    int nodeCount
);

bool canSendAlert(
    NodeStatus node,
    unsigned long cooldownTime
);

#endif
