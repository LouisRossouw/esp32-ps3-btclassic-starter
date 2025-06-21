#include <inputs.h>
#include <Ps3Controller.h>
#include <inputs.h>

#include <globals.h>

void shapeButtonsInputs()
{
    auto &btnDown = Ps3.event.button_down;
    auto &btnUp = Ps3.event.button_up;

    //--- Digital cross/square/triangle/circle button events ---
    if (btnDown.cross)
    {
        dev.log("Started pressing the cross button");
    }

    if (btnUp.cross)
    {
        dev.log("Released the cross button");
    }

    if (btnDown.square)
    {
        dev.log("Started pressing the square button");
    }
    if (btnUp.square)
    {
        dev.log("Released the square button");
    }

    if (btnDown.triangle)
        dev.log("Started pressing the triangle button");
    if (btnUp.triangle)
        dev.log("Released the triangle button");

    if (btnDown.circle)
        dev.log("Started pressing the circle button");
    if (btnUp.circle)
        dev.log("Released the circle button");
}