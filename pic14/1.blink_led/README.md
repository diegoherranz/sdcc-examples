Blink LED
=========

Blink an LED approximately at a 1 Hz frequency.

### Hardware for this example
 - MCLR input pin must be connected to VDD.
 - An LED must be connected to pin RC0. LED anode must be connected to the pin through a ~1k ohm resistor and the LED cathode must be connected to GND.

### Notes
 - `#define NO_BIT_DEFINES` avoids defining every bit of the PIC registers as a separate identifier. E.g. With `#define NO_BIT_DEFINES` you should use `PORTCbits.RC0` and without it, `RC0`.
 - `__code uint16_t __at (_CONFIG1) __configword = _INTRC_OSC_NOCLKOUT [...]` selects internal oscillator as primary oscillator. Default frequency is 4 MHz, which will be the frequency of this example.
 - Since SDCC doesn't provide delay funcions for pic14 port, a simple and uncalibrated delay function is defined using a for loop.
 - `#include <stdint.h>` provides definitions for types like `uint8_t`, `uint16_t`, `int8_t`, etc.
