#pragma once 

#include <Arduino.h>
#include <stdlib.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include "config.h"

String httpGetCall(char *url);
String httpAuthorizedGetCall(char *url, char *token);
void wifiConnect();