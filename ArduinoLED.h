#ifndef ArduinoLED_h
#define ArduinoLED_h

#include <stdint.h>

class ArduinoLED
{
public:
		ArduinoLED(uint8_t LEDPin);
		void Strobe(uint8_t numFlashes,unsigned long delay_ms);
		void High();
		void Low();
private:
	uint8_t m_LEDPin;
};

#endif