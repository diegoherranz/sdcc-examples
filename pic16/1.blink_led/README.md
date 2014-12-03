Blink LED
=========

Blink an LED at a 1 Hz frequency.

### Hardware for this example
 - MCLR input pin must be connected to VDD.
 - An LED must be connected to pin RC0. LED anode must be connected to the pin through a ~1k ohm resistor and the LED cathode must be connected to GND.

### Notes
 - `#pragma config FOSC = INTOSCIO_EC` selects internal oscillator as primary oscillator. Default frequency is 1 MHz, which will be the frequency of this example.
 - `#include <delay.h>` provides access to delay functions. [delay.h](http://sourceforge.net/p/sdcc/code/HEAD/tree/trunk/sdcc/device/include/pic16/delay.h) in SDCC repository.
