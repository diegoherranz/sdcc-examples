SDCC examples
=============

[![Build Status](https://travis-ci.org/diegoherranz/sdcc-examples.svg)](https://travis-ci.org/diegoherranz/sdcc-examples)

This repository includes code examples to use with [SDCC](http://sdcc.sourceforge.net/). The examples can help beginners who usually find problems like which headers to include, which parameters to use when compiling and so on.

### Structure

The examples are structured by microcontroller architecture. For a particular architecture, the examples can be followed in order as a tutorial. The basic concepts explained on the first examples are not explained again on more advanced ones.

On each example there is a `Makefile` so you can compile the example by simply typing `make` (at least on Linux/UNIX). The actual compiler command will be shown so you can learn about the options passed to the compiler.

There are README files on each example with explanations of the code and indications on the hardware required for the test.

The architectures included are:

- `pic14/`: PIC16F microcontrollers which have a 14-bit instruction bus, hence pic14. Examples for PIC16F886, but small modifications needed to use other PICs. As of this writing, the pic14 port is unstable and can even be considered as broken. 
- `pic16/`: PIC18F microcontrollers which have a 16-bit instruction bus, hence pic16. Examples for PIC18F2550, but small modifications needed to use other PICs. As of this writing, the pic16 is unstable but it can be used carefully.

### Requirements
To compile these examples [SDCC](http://sdcc.sourceforge.net/) and [gputils](http://gputils.sourceforge.net/) are required. There are packages of both on repositories of distributions like Debian and Ubuntu. Despite being an easy way to install them, the packages are quite updated and installing the latest stable versions is strongly advised.

#### SDCC installation
SDCC is distributed pre-compiled so it's easy to install.

  - Go to [SCCC files page](http://sourceforge.net/projects/sdcc/files/).
  - Choose your system: `sdcc-linux-x86`, `sdcc-macosx`, `sdcc-win64` or `sdcc-win32`
  - Download the latest stable version and extract it. Be careful not to download Release Candidate (RC) files.
  - Follow the instructions that you can find on `INSTALL.txt` on the downloaded file. They are short and straightforward. Note that you may need `sudo` (on Linux) when copying to system folders.
  - After installation, test that `sdcc -v` works and returns the version number you expect.
  - If not working, showing a message similar to `sdcc: Command not found`, it usally means that 32-bit C libraries are missing on a 64-bit system. On Debian/Ubuntu, `sudo apt-get install libc6:i386`. Similar for other distros.

#### gputils installation
gputils needs to be compiled before installing (except for Windows for which there is an exe installer).

  - Go to [gputils files page](http://sourceforge.net/projects/gputils/files/)
  - Choose `gputils-win32` folder for windows or `gputils` folder otherwise. (In Windows case, just download and install the exe file and don't follow the next steps). 
  - Download the latest stable version and extract it. Be careful not to download Release Candidate (RC) files.
  - Before compiling you may need some software/libraries like `bison` and `flex`. On Debian/Ubuntu, `sudo apt-get install bison flex`. Similar for other distros.
  - Inside `gputils-x.x.x` folder, `./configure && make && sudo make install`.
  - If everything went fine, check that `gpasm -v` works and returns the version number you expect.

### Automatic Tests
Every example on this repository is checked using [Travis-CI](https://travis-ci.org/diegoherranz/sdcc-examples/builds). SDCC and gputils are downloaded and installed on the Travis machine and it is tested that every example compiles without errors.

### Other tutorials
On the [SDCC Wiki](http://sdcc.sourceforge.net/mediawiki/index.php/SDCC_tutorial) you can find other tutorials that can help you.

### Collaboration
Any kind of collaboration like more examples, examples for more architectures, corrections, comments, etc. are very welcome. Feel free to open an issue or fork and pull request.
