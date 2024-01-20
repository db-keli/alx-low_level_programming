#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c -Wno-return-type -Wno-unused-parameter
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
