#include <inputs.h>
#include <Ps3Controller.h>
#include <globals.h>

void stickButtonsInputs()
{
    auto &btnDown = Ps3.event.button_down;
    auto &btnUp = Ps3.event.button_up;

    //--------------- Digital stick button events --------------
    if (btnDown.l3)
        Serial.println("Started pressing the left stick button");
    if (btnUp.l3)
        Serial.println("Released the left stick button");

    if (btnDown.r3)
        Serial.println("Started pressing the right stick button");
    if (btnUp.r3)
        Serial.println("Released the right stick button");
}