#include "homeInfo.h"

s_homeinfo fetchHomeInfo() {
    s_homeinfo homeInfo;
    String jsonInfo = httpGetCall("https://api.netatmo.com/api/homesdata");


    return homeInfo;
}