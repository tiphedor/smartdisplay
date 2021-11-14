#include "DEV_Config.h"
#include "config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "epdGraphics.h"
#include "weather.h"
#include "homeInfo.h"

UBYTE *Image;

void setup() {
	// System
	Serial.begin(115200);
	wifiConnect();

	// API and internet-based info
	configTime(GMT_OFFSET_SEC, DAYLIGHT_OFFSET_SEC, NTP_SERVER);
	s_currentWeather weather = fetchCurrentWeather();
	s_homeinfo homeInfo = fetchHomeInfo();
	struct tm timeinfo;
	getLocalTime(&timeinfo);

	// EPD init
	DEV_Module_Init();
	EPD_7IN5_Init();
	EPD_7IN5_Clear();
	DEV_Delay_ms(500);

	// Init image
	UWORD Imagesize = ((EPD_7IN5_WIDTH % 8 == 0) ? (EPD_7IN5_WIDTH / 8 ) : (EPD_7IN5_WIDTH / 8 + 1)) * EPD_7IN5_HEIGHT;
	if ((Image = (UBYTE *)malloc(Imagesize)) == NULL) {
		printf("Failed to apply for black memory...\r\n");
		while (1);
	}
	Paint_NewImage(Image, EPD_7IN5_WIDTH, EPD_7IN5_HEIGHT, 0, WHITE);
	Paint_SelectImage(Image);
	Paint_Clear(WHITE);

	// UI
	Paint_DrawLine(0, 90, SCREEN_WIDTH, 90, BLACK, DOT_PIXEL_1X1, LINE_STYLE_SOLID);
	drawGraph(
		110, // startYPostion
		30, // startXPosition
		100, // graphHeight
		600, // graphWidth
		5, // numberOfSubdivision
		weather,
		timeinfo
	);
	drawHomeStatus(homeInfo);

	char longDaysOfWeek[][25] = { "Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi" };
	char longMonths[][25] = { "janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "decembre" };
	char buffer[50];
	sprintf(buffer, "%s %d %s", longDaysOfWeek[timeinfo.tm_wday], timeinfo.tm_mday, longMonths[timeinfo.tm_mon]);
	drawCenteredText(buffer, SCREEN_WIDTH, 0, 25, &consolas_32pt, 0);

	// Show the image
	EPD_7IN5_Display(Image);

	Serial.println("Done; going to sleep in 1s...");

	delay(1000);
	hibernation(timeinfo);
}


void loop() { /* We don't do anything in the loop. */ }
