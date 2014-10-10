SDCC examples
=============

[![Build Status](https://travis-ci.org/diegoherranz/sdcc-examples.svg)](https://travis-ci.org/diegoherranz/sdcc-examples)

This repository includes code examples to use with [SDCC](http://sdcc.sourceforge.net/). The examples can help beginners who usually find problems like which headers to include, which parameters to use when compiling and so on.

### Structure

The examples are structured by microcontroller architecture. For a particular architecture, the examples can be followed in order as a tutorials. The basic concepts explained on the first examples are not explained again on more advanced ones.

On each example there is a `Makefile` so you can compile the example by simply typing `make` (at least on linux). The actual compiler command will be shown so you can learn about the options passed to the compiler.

There are README files on each example with explanations of the code and indications on the hardware required for the test.

The architectures included are:

- `pic16/`: PIC18F microcontrollers which have a 16-bit instruction bus, hence pic16.

### Collaboration
Any kind of collaboration like more examples, examples for more architectures, corrections, comments, etc. are very welcome. Feel free to open an issue or fork and pull request.
