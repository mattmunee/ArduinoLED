#include <Arduino.h>
#include "ArduinoLED.h"

ArduinoLED::ArduinoLED(uint8_t LEDPin){
	m_LEDPin=LEDPin;
	pinMode(LEDPin,OUTPUT);
}

void ArduinoLED::Strobe(uint8_t numFlashes,unsigned long delay_ms)
{
	int strobeNum=0;
	while(strobeNum<numFlashes){
		delay(delay_ms);
		digitalWrite(m_LEDPin,HIGH);    // flash LED for 1 msec (still quite visible)
		delay(delay_ms);
		digitalWrite(m_LEDPin,LOW);
		strobeNum++;
	}
	delay(1000);
}