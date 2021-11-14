#pragma once

#include "time.h"
#include "esp_sleep.h"

#define MINUTES_TO_MICROSECONDS 60000000

void minmax(float* minptr, float* maxptr, float* array, int size);
void hibernation(struct tm timeinfo);
