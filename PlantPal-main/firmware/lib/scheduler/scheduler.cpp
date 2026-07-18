#include "scheduler.h"

#include <Arduino.h>

void initializeTask(
    ScheduledTask& task,
    unsigned long interval
)
{
    task.lastRun = millis();
    task.interval = interval;
    task.enabled = true;
    task .pendingExecution = true;
}

bool shouldRunTask(
    ScheduledTask& task
)
{
    if (!task.enabled) {
        return false;
    }

    if (task.pendingExecution) {
        task.pendingExecution = false;
        task.lastRun = millis();

        return true;
    }

    unsigned long currentTime = millis();

    if (currentTime - task.lastRun >= task.interval) {
        task.lastRun = currentTime;
        return true;
    }

    return false;
}

void resetTask(
    ScheduledTask& task
)
{
    task.lastRun = millis();

    task.pendingExecution = false;
}

void forceRunTask(
    ScheduledTask& task
)
{
    task.pendingExecution = true;
}

void enableTask(
    ScheduledTask& task
)
{
    task.enabled = true;
}

void disableTask(
    ScheduledTask& task
)
{
    task.enabled = false;
}

void changeTaskInterval(
    ScheduledTask& task,
    unsigned long interval
)
{
    task.interval = interval;
}