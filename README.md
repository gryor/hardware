Hardware
========

C library for hardware abstraction on embedded systems

```C++
// Blink led on Arduino Pro Micro
// Led pin is 17

#include "arduino.h"


Hardware arduino;


void setup()
{
	hardware_arduino(&arduino);
	pinMode(17, OUTPUT);
}

void loop()
{
	arduino.write(17, 1);
	arduino.delay_milliseconds(1000);
	arduino.write(17, 0);
	arduino.delay_milliseconds(1000);
}
```
