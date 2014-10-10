Empty Main
==========

This example is useful to check if the compiler and the libraries are ready.

### Hardware for this example
Since it is an empty main, there is no point in testing it on real hardware.

### Notes
 - `#include <pic18fregs.h>` automatically selects the header file for the PIC model you are using. For example, using a PIC 18F2550, SDCC must be called with `-p 18f2550` and the actual header file imported will be `pic18f2550.h`. This header file includes the PIC registers names and addresses, configuration bits (aka fuses), etc. Including `pic18fregs.h` instead of `pic18f2550.h` directly is prefered and the code becomes more portable.

 - `#pragma config XINST=OFF` disables extended instruction set of the PIC (fuse) because SDCC generates code incompatible with it.

 - `--use-non-free` is passed to SDCC because Microchip header files are not GPL-compatible since they can be used only for chips produced by Microchip.
