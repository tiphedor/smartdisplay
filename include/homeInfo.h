#pragma once 

#include "espNetwork.h"

typedef struct s_homeinfo {
	float livingRoomCurrentTemp;
	float livingRoomTargetTemp;
	bool livingRoomHeatingStatus;

	float bedroomCurrentTemp;
	float bedroomTargetTemp;
	bool bedroomHeatingStatus;

	float officeCurrentTemp;
	float officeTargetTemp;
	bool officeHeatingStatus;
} s_homeinfo;

s_homeinfo fetchHomeInfo();
