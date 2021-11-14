#include "espNetwork.h"

String httpGetCall(char *url) {
	HTTPClient http;
	http.begin(url);
	int httpResponseCode = http.GET();

	return http.getString();
}

String httpAuthorizedGetCall(char *url) {
	HTTPClient http;
	http.begin(url);
	http.addHeader("Authorization", AUTHORIZATION_BEARER);
	int httpResponseCode = http.GET();

	return http.getString();
}

void wifiConnect() {
	Serial.print("Connecting to ");
	Serial.println(WIFI_SSID);

	WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
	while (WiFi.status() != WL_CONNECTED) {
		delay(150);
		Serial.print(".");
	}

	Serial.println("");
	Serial.println("WiFi connected.");
}