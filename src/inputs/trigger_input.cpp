#include <inputs.h>
#include <Ps3Controller.h>
#include <globals.h>

void triggerButtonsInputs()
{
    auto &btnDown = Ps3.event.button_down;
    auto &btnUp = Ps3.event.button_up;

    //-------------- Digital trigger button events -------------
    if (btnDown.l2)
        dev.log("Started pressing the left trigger button");
    if (btnUp.l2)
        dev.log("Released the left trigger button");

    if (btnDown.r2)
        dev.log("Started pressing the right trigger button");
    if (btnUp.r2)
        dev.log("Released the right trigger button");
}