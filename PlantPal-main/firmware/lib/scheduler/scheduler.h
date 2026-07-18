#ifndef SCHEDULER_H
#define SCHEDULER_H

struct ScheduledTask {
    unsigned long lastRun;
    unsigned long interval;
    bool enabled;
    bool pendingExecution;
};

void initializeTask(
    ScheduledTask& task,
    unsigned long interval
);

bool shouldRunTask(
    ScheduledTask& task
);

void forceRunTask(
    ScheduledTask& task
);

void enableTask(
    ScheduledTask& task
);

void disableTask(
    ScheduledTask& task,
    unsigned long interval
);

#endif