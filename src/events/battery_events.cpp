#include <Ps3Controller.h>

int battery = 0;

void batteryEvents()
{
    //---------------------- Battery events ---------------------
    if (battery != Ps3.data.status.battery)
    {
        battery = Ps3.data.status.battery;
        Serial.print("The controller battery is ");
        if (battery == ps3_status_battery_charging)
            Serial.println("charging");
        else if (battery == ps3_status_battery_full)
            Serial.println("FULL");
        else if (battery == ps3_status_battery_high)
            Serial.println("HIGH");
        else if (battery == ps3_status_battery_low)
            Serial.println("LOW");
        else if (battery == ps3_status_battery_dying)
            Serial.println("DYING");
        else if (battery == ps3_status_battery_shutdown)
            Serial.println("SHUTDOWN");
        else
            Serial.println("UNDEFINED");
    }
}