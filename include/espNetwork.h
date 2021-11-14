#pragma once 

#include <Arduino.h>
#include <stdlib.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include "config.h"
#include "secrets.h"

String httpGetCall(char *url);
void wifiConnect();