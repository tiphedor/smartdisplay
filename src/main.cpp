#include "DEV_Config.h"
#include "config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "epdGraphics.h"
#include "weather.h"
#include "homeInfo.h"

UBYTE *Image;

void setup() {
	Serial.begin(115200);
	wifiConnect();

	configTime(GMT_OFFSET_SEC, DAYLIGHT_OFFSET_SEC, NTP_SERVER);
	s_currentWeather weather = fetchCurrentWeather();
	s_homeinfo homeInfo = fetchHomeInfo();

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

	Paint_DrawLine(0, 90, SCREEN_WIDTH, 90, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
	drawGraph(
		110, // startYPostion
		30, // startXPosition
		100, // graphHeight
		600, // graphWidth
		5, // numberOfSubdivision
		weather
	);
	drawHomeStatus(homeInfo);

	EPD_7IN5_Display(Image);
}

void loop() {
  
}
