#include "epdGraphics.h"

void drawCenteredText(char *text, int containerWidth, int offset, int y, sFONT *font, int inverted) {
	// todo: font size
	int fontWidthPerChar = (*font).Width;
    unsigned int foregroundColor = inverted ? WHITE : BLACK;
    unsigned int backgroundColor = inverted ? BLACK : WHITE;

	int textSize = fontWidthPerChar * strlen(text);
	int textPosition = offset + ((containerWidth - textSize) / 2);
	Paint_DrawString_EN(textPosition, y, text, font, backgroundColor, foregroundColor);
}

void drawGraph(
	int startYPostion,
	int startXPosition,
	int graphHeight,
	int graphWidth,
	int numberOfSubdivision,
    s_currentWeather weather
) {
    char daysOfWeek[7][4] =	{ "dim", "lun", "mar", "mer", "jeu", "ven", "sam" };
    
	int subdivisionStep = graphHeight / (numberOfSubdivision - 1);
    int numberOfValues = 8;
    char bufferDayInfo[50];

	float maxValueDailyMins = 0;
	float minValueDailyMins = 0;
    float maxValueDailyMax = 0;
	float minValueDailyMax = 0;

	minmax(&minValueDailyMins, &maxValueDailyMins, weather.dailyMinTemp, numberOfValues);
	minmax(&minValueDailyMax, &maxValueDailyMax, weather.dailyMaxTemp, numberOfValues);
    
    float maxValue = MAX(maxValueDailyMins, maxValueDailyMax);
    float minValue = MIN(minValueDailyMins, minValueDailyMax);

	int valuesSteps = graphWidth / numberOfValues;
	int scaleTextDelta = maxValue - minValue;
	double scaleValuesStep = (double) scaleTextDelta / double((numberOfSubdivision - 1));

	for (int i = 0; i < numberOfSubdivision; i++) {
		int valueToShow = round((int)maxValue - (scaleValuesStep * i));    
		char valueToShowBuffer[20];
		itoa(valueToShow, valueToShowBuffer, 10);

		Paint_DrawString_EN(startXPosition - 26, startYPostion + subdivisionStep * i - 8, valueToShowBuffer, &Font16, WHITE, BLACK);
		Paint_DrawLine(startXPosition, startYPostion + subdivisionStep * i, startXPosition + graphWidth, startYPostion + subdivisionStep * i, BLACK, DOT_PIXEL_1X1, LINE_STYLE_DOTTED);
	}

	int previousPointX = -1;
	int previousPointYMin = -1;
    int previousPointYMax = -1;

	struct tm timeinfo;
	getLocalTime(&timeinfo);
	int startDay = timeinfo.tm_wday;

	for (int i = 0; i < numberOfValues; i++) {
        int scaledMinValue = map(weather.dailyMinTemp[i], minValue, maxValue, 0, graphHeight);
        int scaledMaxValue = map(weather.dailyMaxTemp[i], minValue, maxValue, 0, graphHeight);

		int pointX = startXPosition + (valuesSteps * i) + (valuesSteps / 2);
		int minTempPointY = (startYPostion + graphHeight) - scaledMinValue;
        int maxTempPointY = (startYPostion + graphHeight) - scaledMaxValue;

		int currentDay = (startDay + i) % 7;

		Paint_DrawCircle(pointX, minTempPointY, 4, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
        Paint_DrawCircle(pointX, maxTempPointY, 4, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);

        
		Paint_DrawString_EN(pointX - ((Font16.Width * 3) / 2), startYPostion + graphHeight + 10, daysOfWeek[currentDay], &Font16, WHITE, BLACK);


        sprintf(bufferDayInfo, "%d/%d", (int)weather.dailyMinTemp[i], (int)weather.dailyMaxTemp[i]);
        Paint_DrawString_EN(pointX - ((Font16.Width * strlen(bufferDayInfo)) / 2), startYPostion + graphHeight + 30, bufferDayInfo, &Font16, WHITE, BLACK);
        
        sprintf(bufferDayInfo, "%d%%", weather.dailyProbabilityOfPrecipitation[i]);
        Paint_DrawString_EN(pointX - ((Font16.Width * strlen(bufferDayInfo)) / 2), startYPostion + graphHeight + 50, bufferDayInfo, &Font16, WHITE, BLACK);



		if (previousPointX != -1 && previousPointYMin != -1 && previousPointYMax != -1) {
			Paint_DrawLine(previousPointX, previousPointYMin, pointX, minTempPointY, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
            Paint_DrawLine(previousPointX, previousPointYMax, pointX, maxTempPointY, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
		}

		previousPointX = pointX;
		previousPointYMin = minTempPointY;
        previousPointYMax = maxTempPointY;
	}
}

void drawHomeStatus(s_homeinfo homeInfo) {
	char buffer[30];

	// Chambre
	if (homeInfo.bedroomHeatingStatus) {
		Paint_DrawRectangle(0, 285, SCREEN_WIDTH / 3, SCREEN_HEIGHT, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
	}
	sprintf(buffer, "%.1f~ / %.1f~", homeInfo.bedroomCurrentTemp, homeInfo.bedroomTargetTemp);
	drawCenteredText("chambre", SCREEN_WIDTH / 3, 0, 290, &consolas_32pt, homeInfo.bedroomHeatingStatus);
	drawCenteredText(buffer, SCREEN_WIDTH / 3, 0, 350, &consolas_28pt, homeInfo.bedroomHeatingStatus);

	// Salon
	sprintf(buffer, "%.1f~ / %.1f~", homeInfo.livingRoomCurrentTemp, homeInfo.livingRoomTargetTemp);
	if (homeInfo.livingRoomHeatingStatus) {
		Paint_DrawRectangle(SCREEN_WIDTH / 3, 285, (2 * SCREEN_WIDTH) / 3, SCREEN_HEIGHT, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
	}
	drawCenteredText("salon", SCREEN_WIDTH / 3, SCREEN_WIDTH / 3, 290, &consolas_32pt, homeInfo.livingRoomHeatingStatus);
	drawCenteredText(buffer, SCREEN_WIDTH / 3, SCREEN_WIDTH / 3, 350, &consolas_28pt, homeInfo.livingRoomHeatingStatus);

	// Bureau
	sprintf(buffer, "%.1f~ / %.1f~", homeInfo.officeCurrentTemp, homeInfo.officeTargetTemp);
	if (homeInfo.officeHeatingStatus) {
		Paint_DrawRectangle((2 * SCREEN_WIDTH) / 3, 285, SCREEN_WIDTH, SCREEN_HEIGHT, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);
	}
	drawCenteredText("bureau", 	SCREEN_WIDTH / 3, (2 * SCREEN_WIDTH) / 3, 290, &consolas_32pt, homeInfo.officeHeatingStatus);
	drawCenteredText(buffer, SCREEN_WIDTH / 3, (2 * SCREEN_WIDTH) / 3, 350, &consolas_28pt, homeInfo.officeHeatingStatus);

	Paint_DrawLine(0, 285, SCREEN_WIDTH, 285, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
	Paint_DrawLine(SCREEN_WIDTH / 3, 285, SCREEN_WIDTH / 3, SCREEN_HEIGHT, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
	Paint_DrawLine((2 * SCREEN_WIDTH) / 3, 285, (2 * SCREEN_WIDTH) / 3, SCREEN_HEIGHT, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
}