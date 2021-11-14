#include "utils.h"

// copied from https://www.usna.edu/Users/cs/roche/courses/f20ic210/notes/06/files.php?f=minmax.c out of lazyness
void minmax(float* minptr, float* maxptr, float* array, int size) {
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

void hibernation(struct tm timeinfo) {
	// If the time is between 07:00 and 23:00, refresh every 1h. Otherwise, every 15m
	int minutesTillUpdate;
	if (timeinfo.tm_hour <= 7 || timeinfo.tm_hour >= 23) {
		minutesTillUpdate = 60;
	} else {
		minutesTillUpdate = 15;
	}

	esp_sleep_enable_timer_wakeup(MINUTES_TO_MICROSECONDS * minutesTillUpdate);

	// Hibernate everything
	esp_sleep_pd_config(ESP_PD_DOMAIN_MAX, ESP_PD_OPTION_OFF);
	esp_sleep_pd_config(ESP_PD_DOMAIN_RTC_PERIPH, ESP_PD_OPTION_OFF);
	esp_sleep_pd_config(ESP_PD_DOMAIN_RTC_SLOW_MEM, ESP_PD_OPTION_OFF);
	esp_sleep_pd_config(ESP_PD_DOMAIN_RTC_FAST_MEM, ESP_PD_OPTION_OFF);
	esp_deep_sleep_start();
}