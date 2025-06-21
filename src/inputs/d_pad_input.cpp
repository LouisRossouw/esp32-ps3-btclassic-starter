#include <inputs.h>
#include <Ps3Controller.h>

#include <globals.h>

void dPadButtonsInputs()
{
    auto &btnDown = Ps3.event.button_down;
    auto &btnUp = Ps3.event.button_up;

    //--------------- Digital D-pad button events --------------
    if (btnDown.up)
        dev.log("Started pressing the up button");
    if (btnUp.up)
        dev.log("Released the up button");

    if (btnDown.right)
        dev.log("Started pressing the right button");
    if (btnUp.right)
        dev.log("Released the right button");

    if (btnDown.down)
        dev.log("Started pressing the down button");
    if (btnUp.down)
        dev.log("Released the down button");

    if (btnDown.left)
        dev.log("Started pressing the left button");
    if (btnUp.left)
        dev.log("Released the left button");
}