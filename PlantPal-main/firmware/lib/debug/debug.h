#ifndef DEBUG_H
#define DEBUG_H

#include <Arduino.h>

#define DEBUG_ENABLED  true

enum DebugLevel
{
    DEBUG_ERROR = 0,
    DEBUG_WARNING,
    DEBUG_INFO,
    DEBUG_VERBOSE
};

constexpr DebugLevel CURRENT_DEBUG_LEVEL = DEBUG_INFO;

#if DEBUG_ENABLED

    #define DEBUG_BEGIN(baud) Serial.begin(baud)

#else

    #define DEBUG_BEGIN(baud)

#endif

#if DEBUG_ENABLED

#define DEBUG_ERROR_PRINT(x)                 \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_ERROR)  \
    {                                        \
        Serial.print("[ERROR] ");            \
        Serial.print(x);                     \
    }

#define DEBUG_ERROR_PRINTLN(x)               \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_ERROR)  \
    {                                        \
        Serial.print("[ERROR] ");            \
        Serial.println(x);                   \
    }

#else

#define DEBUG_ERROR_PRINT(x)
#define DEBUG_ERROR_PRINTLN(x)

#endif

#if DEBUG_ENABLED

#define DEBUG_WARNING_PRINT(x)                 \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_WARNING)  \
    {                                          \
        Serial.print("[WARNING] ");            \
        Serial.print(x);                       \
    }

#define DEBUG_WARNING_PRINTLN(x)               \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_WARNING)  \
    {                                          \
        Serial.print("[WARNING] ");            \
        Serial.println(x);                     \
    }

#else

#define DEBUG_WARNING_PRINT(x)
#define DEBUG_WARNING_PRINTLN(x)

#endif

#if DEBUG_ENABLED

#define DEBUG_INFO_PRINT(x)                 \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_INFO)  \
    {                                       \
        Serial.print("[INFO] ");            \
        Serial.print(x);                    \
    }

#define DEBUG_INFO_PRINTLN(x)               \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_INFO)  \
    {                                       \
        Serial.print("[INFO] ");            \
        Serial.println(x);                  \
    }

#else

#define DEBUG_INFO_PRINT(x)
#define DEBUG_INFO_PRINTLN(x)

#endif

#if DEBUG_ENABLED

#define DEBUG_VERBOSE_PRINT(x)                 \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_VERBOSE)  \
    {                                          \
        Serial.print("[VERBOSE] ");            \
        Serial.print(x);                       \
    }

#define DEBUG_VERBOSE_PRINTLN(x)               \
    if (CURRENT_DEBUG_LEVEL >= DEBUG_VERBOSE)  \
    {                                          \
        Serial.print("[VERBOSE] ");            \
        Serial.println(x);                     \
    }

#else

#define DEBUG_VERBOSE_PRINT(x)
#define DEBUG_VERBOSE_PRINTLN(x)

#endif


#if DEBUG_ENABLED

#define DEBUG_PRINTF(...) Serial.printf(__VA_ARGS__)

#else

#define DEBUG_PRINTF(...)

#endif

#endif