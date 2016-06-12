SDCC examples
=============

[![Build Status](https://travis-ci.org/diegoherranz/sdcc-examples.svg?branch=master)](https://travis-ci.org/diegoherranz/sdcc-examples)

This repository includes code examples to use with [SDCC](http://sdcc.sourceforge.net/), an open source compiler for 8-bit microcontrollers. The examples can help beginners who usually find problems like which headers to include, which parameters to use when compiling, etc.

### Structure

The examples are structured by microcontroller architecture. For a particular architecture, the examples can be followed in order as a tutorial. The basic concepts explained on the first examples are not explained again on more advanced ones.

On each example folder there is a `Makefile` so you can compile the example by simply running `make`. The actual compiler command will be shown so you can learn about the options passed to the compiler.

There are README files on each example with explanations of the code and indications on the hardware required to test it.

The architectures included are:

- `pic14/`: PIC16F microcontrollers which have a 14-bit instruction bus, hence pic14. Examples for PIC16F886, but small modifications needed to use other PICs. As of this writing, the pic14 port of SDCC is unstable and can even be considered as broken. 
- `pic16/`: PIC18F microcontrollers which have a 16-bit instruction bus, hence pic16. Examples for PIC18F2550, but small modifications needed to use other PICs. As of this writing, the pic16 port of SDCC is unstable but it can be used carefully.

### Requirements
To compile these examples [SDCC](http://sdcc.sourceforge.net/) is required. [gputils](http://gputils.sourceforge.net/) is also required for PIC ports.

### Installation on Linux
There are packages of both on repositories of distributions like Debian and Ubuntu. Despite being an easy way to install them, the packages are usually outdated and installing the latest stable versions is strongly recommended. These instructions are for Ubuntu 12.04 LTS, 14.04 LTS and 16.04 LTS, but the process should be very similar for other distros, hopefully just changing the dependencies install. 

#### Installing dependencies
Before intalling gputils and SDCC, these dependencies are needed:
`$ sudo apt-get install bison flex g++ libboost-dev texinfo` (probably similar packages for other distros)

#### gputils installation
gputils needs to be compiled before installing. Needs to be installed before SDCC.

  - Go to [gputils source files page](http://sourceforge.net/projects/gputils/files/gputils/)
  - Download the latest stable version and extract it. Be careful not to download Release Candidate (RC) files.
  - Inside `gputils-x.x.x` folder, run `./configure && make && sudo make install`.
  - If everything went fine, check that `gpasm -v` works and returns the version number you expect.

#### SDCC installation

Up to SDCC 3.4.0, the precompiled version of SDCC worked fine on the Ubuntu 12.04 LTS and 14.04 LTS versions, but from 3.5.0 on, SDCC needs to be compiled because the precompiled files depend on GLIBCXX_3.4.20 which is not available on those Ubuntu versions.

  - Go to [SCCC source files page](http://sourceforge.net/projects/sdcc/files/sdcc/).
  - Download the latest stable version and extract it. Be careful not to download Release Candidate (RC) files.
  - Inside `sdcc-x.x.x` folder, run `./configure && make && sudo make install`.
  - If everything went fine, check that `sdcc -v` works and returns the version number you expect.

### Installation on Windows

#### gputils installation

  - Go to [gputils files page](http://sourceforge.net/projects/gputils/files/gputils-win32/)
  - Download the latest stable version. Be careful not to download Release Candidate (RC) files.
  - Just execute the exe file and follow the installer.
  - If everything went fine, check that `gpasm -v` works and returns the version number you expect.

#### SDCC installation

  - Go to SCCC source files page: [32-bit](http://sourceforge.net/projects/sdcc/files/sdcc-win32/) or [64-bit](http://sourceforge.net/projects/sdcc/files/sdcc-win64/).
  - Download the latest stable version. Be careful not to download Release Candidate (RC) files.
  - Just execute the exe file and follow the installer.
  - If everything went fine, check that `sdcc -v` works and returns the version number you expect.

### Continuous Integration (automatic tests)
This repository is tested automatically on on [Travis-CI](https://travis-ci.org/diegoherranz/sdcc-examples/builds) using the latest 3 SDCC and latest 2 gputils releases to make sure that every example is built without errors on those SDCC and gputils combinations (SDCC and gputils are downloaded and installed on the Travis instance automatically). The generated code is not tested (e.g. simulator), but at least this makes sure that the examples can be compiled.

### Other tutorials
On the [SDCC Wiki](http://sdcc.sourceforge.net/mediawiki/index.php/SDCC_tutorial) you can find other tutorials that can help you.

### Collaboration
Any kind of collaboration like more examples, examples for more architectures, corrections, comments, etc. are very welcome. Feel free to open an issue or fork and pull request.
