#! /bin/bash
gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c -o prog
./prog
rm ./prog