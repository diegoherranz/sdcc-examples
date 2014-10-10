#!/usr/bin/env python 

import os
import subprocess

# traverse directories, and "make" if a Makefile is present
for root, dirs, files in os.walk("."):
    if 'Makefile' in files:
        if subprocess.call(['make', '-C', root]) != 0:
            exit(1)

