#!/bin/bash

# This script compiles all .c files in the current directory into a single dynamic library named liball.so.

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

