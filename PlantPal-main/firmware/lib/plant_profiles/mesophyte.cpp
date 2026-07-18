#include "mesophyte.h"

PlantProfile mesophyteProfile =
{
    // Moisture
    {
        35.0f,
        50.0f,
        65.0f,
        85.0f,
        4.0f,
        PLATEAU_CURVE
    },

    // Sunlight
    {
        40.0f,
        70.0f,
        90.0f,
        80.0f,
        4.0f,
        BELL_CURVE
    },

    // Temperature
    {
        18.0f,
        24.0f,
        30.0f,
        85.0f,
        4.0f,
        PLATEAU_CURVE
    },

    0.30f,   // sunlightWeight
    0.45f,   // moistureWeight
    0.25f,   // temperatureWeight

    1.0f     // recoverySensitivity
};