#include "arduino.h"
#include <Arduino.h>


static uint32_t milliseconds() {
	return millis();
}

static uint32_t microseconds() {
	return micros();
}


static void delay_milliseconds(uint32_t milliseconds) {
	delay(milliseconds);
}

static void delay_microseconds(uint32_t microseconds) {
	delayMicroseconds(microseconds);
}


static void write(uint8_t pin, uint8_t high) {
	digitalWrite(pin, high ? HIGH : LOW);
}

static uint8_t read(uint8_t pin) {
	return (digitalRead(pin) == HIGH) ? 1 : 0;
}



void hardware_arduino(Hardware * hardware) {
	hardware->milliseconds = milliseconds;
	hardware->microseconds = microseconds;

	hardware->delay_milliseconds = delay_milliseconds;
	hardware->delay_microseconds = delay_microseconds;

	hardware->write = write;
	hardware->read = read;
}
