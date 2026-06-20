#include "sensor_normalizer.h"

float normalizeValue(
    float value,
    float rawMin,
    float rawMax
)

{
    if (rawMax - rawMin == 0) {
        return 0.0f; 
    }
    float normalizedValue = (value - rawMin) / (rawMax - rawMin);
    
    if (normalizedValue < 0.0f) {
        normalizedValue = 0.0f;
        } 
    else if (normalizedValue > 1.0f) {
        normalizedValue = 1.0f;
    }

    return normalizedValue;

}
