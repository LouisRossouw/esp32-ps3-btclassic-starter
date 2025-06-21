#include <inputs.h>
#include <Ps3Controller.h>

#include <globals.h>

void startButtonsInputs()
{
    auto &btnDown = Ps3.event.button_down;
    auto &btnUp = Ps3.event.button_up;

    //---------- Digital select/start/ps button events ---------
    if (btnDown.select)
        dev.log("Started pressing the select button");
    if (btnUp.select)
        dev.log("Released the select button");

    if (btnDown.start)
        dev.log("Started pressing the start button");
    if (btnUp.start)
        dev.log("Released the start button");

    if (btnDown.ps)
        dev.log("Started pressing the Playstation button");
    if (btnUp.ps)
        dev.log("Released the Playstation button");

    if (btnDown.start && btnDown.select)
    {
        dev.toggle();
    }
}