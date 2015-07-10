#include <ArduinoLED.h>

ArduinoLED led(9);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  led.Strobe(10,100);
  delay(1000);

}
