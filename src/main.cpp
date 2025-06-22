
#include <inputs.h>
#include <events.h>
#include <Ps3Controller.h>

#include <dev.h>

using namespace std;

int player = 1;
const char *controller = "78:18:81:57:05:fd";

Dev dev();

void notify()
{

  // Inputs
  shapeButtonsInputs();
  dPadButtonsInputs();
  shoulderButtonsInputs();
  triggerButtonsInputs();
  stickButtonsInputs();
  startButtonsInputs();
  analogStickButtonsInputs();

  // Events
  batteryEvents();
}

void onConnect()
{
  Serial.println("Connected.");
}

void setup()
{

  Serial.begin(115200);

  Ps3.attach(notify);
  Ps3.attachOnConnect(onConnect);
  Ps3.begin(controller);

  Serial.println("Ready.");
}

void loop()
{
  if (!Ps3.isConnected())
  {
    return;
  }

  //-------------------- Player LEDs -------------------
  Serial.print("Setting LEDs to player ");
  Serial.println(player, DEC);
  Ps3.setPlayer(player);

  // player = (player + 1) % 11;  // roll over after 10

  delay(2000);
}
  