#include "homeInfo.h"

s_homeinfo fetchHomeInfo() {
    s_homeinfo homeInfo;
    String jsonInfo = httpAuthorizedGetCall("https://api.netatmo.com/api/homestatus?home_id=" NETATMO_HOME_ID, AUTHORIZATION_BEARER);

    DynamicJsonDocument doc(3072);
    DeserializationError error = deserializeJson(doc, jsonInfo);

    if (error) {
		Serial.print(F("deserializeJson() failed: "));
		Serial.println(error.f_str());
		return homeInfo;
	}

    JsonObject homeData = doc["body"]["home"];
    for (JsonObject room : homeData["rooms"].as<JsonArray>()) {
        const char* roomId = room["id"];

        if (strcmp(roomId, ROOM_ID_LIVINGROOM) == 0) {
            homeInfo.livingRoomCurrentTemp = room["therm_measured_temperature"];
            homeInfo.livingRoomTargetTemp = room["therm_setpoint_temperature"];
            homeInfo.livingRoomHeatingStatus = room["heating_power_request"] != 0;
        } else if (strcmp(roomId, ROOM_ID_OFFICE) == 0) {
            homeInfo.officeCurrentTemp = room["therm_measured_temperature"];
            homeInfo.officeTargetTemp = room["therm_setpoint_temperature"];
            homeInfo.officeHeatingStatus = room["heating_power_request"] != 0;
        } if (strcmp(roomId, ROOM_ID_BEDROOM) == 0) {
            homeInfo.bedroomCurrentTemp = room["therm_measured_temperature"];
            homeInfo.bedroomTargetTemp = room["therm_setpoint_temperature"];
            homeInfo.bedroomHeatingStatus = room["heating_power_request"] != 0;
        }
    }

    return homeInfo;
}