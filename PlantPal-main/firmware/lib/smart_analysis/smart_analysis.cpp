#include "smart_analysis.h"
#include <Arduino.h>

int getHighestPriorityNode(
    NodeStatus nodes[],
    int nodeCount
)

{
    int highestPriorityIndex = 0;

    for (int i = 1; i < nodeCount; i++) {
        if(nodes[i].healthScore < nodes[highestPriorityIndex].healthScore) {
            highestPriorityIndex = i;
        }
    }
    return highestPriorityIndex;
}

bool canSendAlert(
    NodeStatus node,
    unsigned long cooldownTime
)

{
    if(millis() - node.lastAlertTime > cooldownTime) {
        return true;
    }
    return false;
}