#!/bin/bash
# Script that creates a dynamic library called liball.so from all the .c files in the current directory
gcc -c -fPIC *.c # Compile all the .c files into object files with position-independent code
gcc -shared -o liball.so *.o # Create the dynamic library from the object files
