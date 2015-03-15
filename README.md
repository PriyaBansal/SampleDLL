# SampleDLL
This project contains 4 files. 

1. foo.c

2. foo.h

3. libfoo.dll : This is the shared library created by compiling foo.c and foo.h

4. LoadLib.c : This is the main program that loads the libfoo.dll and calls its functions.

To test the project, run:

x86_64-w64-mingw32-gcc LoadLib.c -o Load.exe

./Load.exe
