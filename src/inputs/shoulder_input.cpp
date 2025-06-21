#include <inputs.h>
#include <Ps3Controller.h>
#include <globals.h>

void shoulderButtonsInputs()
{
    auto &btnDown = Ps3.event.button_down;
    auto &btnUp = Ps3.event.button_up;

    //------------- Digital shoulder button events -------------
    if (btnDown.l1)
        dev.log("Started pressing the left shoulder button");
    if (btnUp.l1)
        dev.log("Released the left shoulder button");

    if (btnDown.r1)
        dev.log("Started pressing the right shoulder button");
    if (btnUp.r1)
        dev.log("Released the right shoulder button");
}
