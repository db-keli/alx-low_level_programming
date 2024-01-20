#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c -Wno-return-type
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
