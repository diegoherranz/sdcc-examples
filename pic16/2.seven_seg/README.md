7-Segment display
=================

Count on a 7 segment display at 1 Hz.

### Hardware for this example
 - MCLR input pin must be connected to VDD.
 - A common cathode 7 segment display must be connected to PORTB. Common cathode connected to GND and anodes connected to the PIC pin through a ~1k ohm resistor each. Display segment A should be connected to RB0, segment B to RB1 and so on until segment G connected to RB6. [Seven-segment display](http://en.wikipedia.org/wiki/Seven-segment_display) on Wikipedia.
  
### Notes
 - Function `number_to_7_seg` converts from an integer number to which segments must be on/off.
 - `#include <stdint.h>` provides definitions for types like `uint8_t`, `uint16_t`, `int8_t`, etc.
