# ESP32 PS3 Bluetooth classic starter

- This is a quick starter repo to do my prototyping with the PS3 controller. (I dont know c++, but here we are 😄, learning)
- It is configured to use platformio, and bluetooth classic for esp32.

## Quick start:

- install Platformio extension.
- On Platformio select this project as a project, Platformio will generate some files in .vscode directory.

- in platformio.ini change to a different board, platform, framework. or use Platformio UI.

## To build to ESP32:

- connect esp32.

  in terminal:

- pio run (to build)
- pio --target upload (to upload to the board, depending on board, you might need to hold down the boot button for this upload process.)
- Push the reset button.

- pio device (To view serial output)

## Extras:

No pio cli ? No problemo.

- Add the scripts directory to your system environment variables, somepath/platformio/penv/Scripts
- on Windows it would be - C:\Users\[your-user]\.platformio\penv\Scripts

## To print the button outputs:

- On the PS3 controller, press select and start at the same time to activate serial print. alternatively, in dev the class change the global bool state to default to true.
