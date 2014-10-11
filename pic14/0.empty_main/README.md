Empty Main
==========

This example is useful to check if the compiler and the libraries are ready.

### Hardware for this example
Since it is an empty main, there is no point in testing it on real hardware.

### Notes
 - `#include <pic14regs.h>` automatically selects the header file for the PIC model you are using. For example, using a PIC 16F886, SDCC must be called with `-p 16f886` and the actual header file imported will be `pic16f886.h`. This header file includes the PIC registers names and addresses, configuration bits (aka fuses), etc. Including `pic14regs.h` instead of `pic16f886.h` directly is prefered and the code becomes more portable.

 - `--use-non-free` is passed to SDCC because Microchip header files are not GPL-compatible since they can be used only for chips produced by Microchip.
