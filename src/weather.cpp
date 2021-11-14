#include "weather.h"

s_currentWeather fetchCurrentWeather() {
	String payload = httpGetCall(API_ENDPOINT);
	DynamicJsonDocument doc(32768);
	DeserializationError error = deserializeJson(doc, payload);
	s_currentWeather weather;

	if (error) {
		Serial.print(F("deserializeJson() failed: "));
		Serial.println(error.f_str());
		return weather;
	}

	JsonObject current = doc["current"];
	weather.currentTemp = current["temp"];

	JsonArray daily = doc["daily"];
	for (int i = 0; i <= 7; i++) {
		JsonObject dailyInfo = daily[i];
		JsonObject dailyTemp = dailyInfo["temp"];

		weather.dailyTemp[i] = dailyTemp["day"];
		weather.dailyMinTemp[i] = dailyTemp["min"];
		weather.dailyMaxTemp[i] = dailyTemp["max"];

		float pop = dailyInfo["pop"];

		weather.dailyProbabilityOfPrecipitation[i] = int(pop * 100);
	}

	return weather;
}
