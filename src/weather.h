#ifndef _weather_h_
#define _weather_h_

#include <stdlib.h>
#include <ArduinoJson.h>
#include "espNetwork.h"
#include "config.h"

typedef struct s_currentWeather {
	float currentTemp;
	float dailyTemp[8];
	float dailyMinTemp[8];
	float dailyMaxTemp[8];
	int dailyProbabilityOfPrecipitation[8];
} s_currentWeather;

s_currentWeather fetchCurrentWeather();

#endif