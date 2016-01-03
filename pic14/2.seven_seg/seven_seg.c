// Copyright (C) 2014 Diego Herranz

#define NO_BIT_DEFINES
#include <pic14regs.h>
#include <stdint.h> 

// Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN),
// disable watchdog,
// and disable low voltage programming.
// The rest of fuses are left as default.
__code uint16_t __at (_CONFIG1) __configword = _INTRC_OSC_NOCLKOUT & _WDTE_OFF & _LVP_OFF;

// Uncalibrated delay, just waits a number of for-loop iterations
void delay(uint16_t iterations)
{
	uint16_t i;
	for (i = 0; i < iterations; i++) {
		// Prevent this loop from being optimized away.
		__asm nop __endasm;
	}
}

uint8_t number_to_7seg(uint8_t number)
{
	switch (number) {
		case 0:
			return 0x3F;
		case 1:
			return 0x06;
		case 2:
			return 0x5B;
		case 3:
			return 0x4F;
		case 4:
			return 0x66;
		case 5:
			return 0x6D;
		case 6:
			return 0x7D;
		case 7:
			return 0x07;
		case 8:
			return 0x7F;
		case 9:
			return 0x6F;
		default:
			return 0;
	}
}

void main(void)
{
	uint8_t i;

	TRISB = 0; // Pins as output
	PORTB = 0; // LEDs off
	
	while (1) {
		for (i = 0; i < 10; i++) {
			PORTB = number_to_7seg(i);
			delay(60000); //~1s @ 4MHz	
		}		
	}
}
