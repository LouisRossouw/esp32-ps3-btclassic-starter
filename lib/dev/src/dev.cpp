#include "dev.h"

bool Dev::enabled = false;

void Dev::log(const String &message)
{
    if (enabled)
    {
        Serial.println(message);
    }
}

void Dev::toggle()
{
    log("Dev updated to:" + !enabled);
    enabled = !enabled;
}

bool Dev::isEnabled()
{
    return enabled;
}