#include <Arduino.h>
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include <stdlib.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 384

UBYTE *Image;

// copied from https://www.usna.edu/Users/cs/roche/courses/f20ic210/notes/06/files.php?f=minmax.c out of lazyness
void minmax(int* minptr, int* maxptr, int* array, int size) {
	// start with both equaling the first array element
	*minptr = array[0];
	*maxptr = array[0];

	// go through the rest of the array and update as necessary
	for (int i = 1; i < size; ++i) {
		if (array[i] < *minptr) {
			*minptr = array[i];
		} else if (array[i] > *maxptr) {
			*maxptr = array[i];
		}
	}
}

void drawCenteredText(char *text, int containerWidth, int offset, int y, int fontSize) {
	// todo: font size
	int fontWidthPerChar = 11;

	int textSize = fontWidthPerChar * strlen(text);
	int textPosition = offset + ((containerWidth - textSize) / 2);
	Paint_DrawString_EN(textPosition, y, text, &Font16, WHITE, BLACK);
}

void drawGraph(
	int startYPostion,
	int startXPosition,
	int graphHeight,
	int graphWidth,
	int numberOfSubdivision
) {
	int values[] = {3, 0, 12, 14, 21, 12, 14, 22, 21};

	int subdivisionStep = graphHeight / (numberOfSubdivision - 1);

	int maxValue = 0;
	int minValue = 0;
	int numberOfValues = sizeof(values) / sizeof(int);
	minmax(&minValue, &maxValue, values, numberOfValues);

	int valuesSteps = graphWidth / numberOfValues;
	int scaleTextDelta = maxValue - minValue;
	double scaleValuesStep = (double) scaleTextDelta / double((numberOfSubdivision - 1));
	int scaleFontSize = 12;

	for (int i = 0; i < numberOfSubdivision; i++) {
		int valueToShow = trunc(maxValue - (scaleValuesStep * i));    
		char valueToShowBuffer[20];
		itoa(valueToShow, valueToShowBuffer, 10);

		Paint_DrawString_EN(startXPosition - 26, startYPostion + subdivisionStep * i - 8, valueToShowBuffer, &Font16, WHITE, BLACK);
		Paint_DrawLine(startXPosition, startYPostion + subdivisionStep * i, startXPosition + graphWidth, startYPostion + subdivisionStep * i, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
	}

	int previousPointX = -1;
	int previousPointY = -1;
	for (int i = 0; i < numberOfValues; i++) {
		int value = values[i];
		int scaledValue = map(value, minValue, maxValue, 0, graphHeight);

		int pointX = startXPosition + (valuesSteps * i) + (valuesSteps / 2);
		int pointY = (startYPostion + graphHeight) - scaledValue;

		Paint_DrawCircle(pointX, pointY, 4, BLACK, DOT_PIXEL_1X1, DRAW_FILL_FULL);

		if (previousPointX != -1 && previousPointY != -1) {
			Paint_DrawLine(previousPointX, previousPointY, pointX, pointY, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);    
		}

		previousPointX = pointX;
		previousPointY = pointY;
	}
}

void setup() {
	// Init display
	DEV_Module_Init();
	EPD_7IN5_Init();
	EPD_7IN5_Clear();
	DEV_Delay_ms(500);

	UWORD Imagesize = ((EPD_7IN5_WIDTH % 8 == 0) ? (EPD_7IN5_WIDTH / 8 ) : (EPD_7IN5_WIDTH / 8 + 1)) * EPD_7IN5_HEIGHT;
	if ((Image = (UBYTE *)malloc(Imagesize)) == NULL) {
		printf("Failed to apply for black memory...\r\n");
		while (1);
	}

	// Init image
	Paint_NewImage(Image, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, 0, WHITE);
	Paint_SelectImage(Image);
	Paint_Clear(WHITE);


	drawCenteredText("TEST", SCREEN_WIDTH, 0, 20, 20);
	drawGraph(
		100, // startYPostion
		30, // startXPosition
		100, // graphHeight
		250, // graphWidth
		5 // numberOfSubdivision
	);

	drawCenteredText("chambre", SCREEN_WIDTH / 3, 0, 360, 20);
	drawCenteredText("21°", SCREEN_WIDTH / 6, 0, 300, 24);
	drawCenteredText("salon", SCREEN_WIDTH / 3, SCREEN_WIDTH / 3, 300, 20);
	drawCenteredText("bureau", SCREEN_WIDTH / 3, (2 * SCREEN_WIDTH) / 3, 300, 20);


	EPD_7IN5_Display(Image);  
}

void loop() {
  
}
