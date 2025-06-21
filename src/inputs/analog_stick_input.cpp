#include <inputs.h>
#include <Ps3Controller.h>
#include <globals.h>

void analogStickButtonsInputs()

{
    auto &btnAnalog = Ps3.data.analog;
    auto &btnAnalogChanged = Ps3.event.analog_changed;

    //---------------- Analog stick value events ---------------
    if (abs(btnAnalogChanged.stick.lx) + abs(btnAnalogChanged.stick.ly) > 2)
    {
        dev.log("Moved the left stick: x=" + String(btnAnalog.stick.lx) + " y=" + String(btnAnalog.stick.ly));
    }

    if (abs(btnAnalogChanged.stick.rx) + abs(btnAnalogChanged.stick.ry) > 2)
    {
        dev.log("Moved the right stick: x=" + String(btnAnalog.stick.rx) + " y=" + String(btnAnalog.stick.ry));
    }

    //--------------- Analog D-pad button events ----------------
    if (abs(btnAnalogChanged.button.up))
    {
        dev.log("Pressing the up button: " + String(btnAnalog.button.up));
    }

    if (abs(btnAnalogChanged.button.right))
    {

        dev.log("Pressing the right button: " + String(btnAnalog.button.right));
    }

    if (abs(btnAnalogChanged.button.down))
    {
        dev.log("Pressing the down button: " + String(btnAnalog.button.down));
    }

    if (abs(btnAnalogChanged.button.left))
    {
        dev.log("Pressing the left button: " + String(btnAnalog.button.left));
    }

    //---------- Analog shoulder/trigger button events ----------
    if (abs(btnAnalogChanged.button.l1))
    {
        dev.log("Pressing the left shoulder button: " + String(btnAnalog.button.l1));
    }

    if (abs(btnAnalogChanged.button.r1))
    {

        dev.log("Pressing the right shoulder button: " + String(btnAnalog.button.r1));
    }

    if (abs(btnAnalogChanged.button.l2))
    {
        dev.log("Pressing the left trigger button: " + String(btnAnalog.button.l2));
    }

    if (abs(btnAnalogChanged.button.r2))
    {

        dev.log("Pressing the right trigger button: " + String(btnAnalog.button.r2));
    }

    //---- Analog cross/square/triangle/circle button events ----
    if (abs(btnAnalogChanged.button.triangle))
    {
        dev.log("Pressing the triangle button: " + String(btnAnalog.button.triangle));
    }

    if (abs(btnAnalogChanged.button.circle))
    {
        dev.log("Pressing the circle button: " + String(btnAnalog.button.circle));
    }

    if (abs(btnAnalogChanged.button.cross))
    {
        dev.log("Pressing the cross button: " + String(btnAnalog.button.cross));
    }

    if (abs(btnAnalogChanged.button.square))
    {
        dev.log("Pressing the square button: " + String(btnAnalog.button.square));
    }
}