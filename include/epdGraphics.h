#pragma once 

#include "weather.h"
#include "fonts.h"
#include "GUI_Paint.h"
#include "EPD.h"
#include "utils.h"
#include "config.h"
#include "homeInfo.h"

#include "fonts/consolas_14pt.h"
#include "fonts/consolas_28pt.h"
#include "fonts/consolas_32pt.h"

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

void drawCenteredText(char *text, int containerWidth, int offset, int y, sFONT *font, int inverted);
void drawGraph(int startYPostion, int startXPosition, int graphHeight, int graphWidth, int numberOfSubdivision, s_currentWeather weather, struct tm timeinfo);
void drawHomeStatus(s_homeinfo homeInfo);
