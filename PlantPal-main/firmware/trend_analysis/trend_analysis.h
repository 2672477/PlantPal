#ifndef TREND_ANALYSIS_H
#define TREND_ANALYSIS_H

#define TREND_HISTORY_SIZE 10

#include "../utils/types.h"

void addHealthScore(float healthScore);

float calculateMovingAvergae();
float calculateWeightedAverage();
float calculateTrendSlope();
float calculateVolatility();
float predictFutureHealth(
    int futureSteps
);

TrendState getTrendState();

#endif 
