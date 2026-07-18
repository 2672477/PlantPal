#include "node_identity.h"
#include <Wifi.h>

String NodeID = "";

void initializeNodeID() {
        NodeID = WiFi.macAddress();
}

String getNodeID() {
    return NodeID;
}