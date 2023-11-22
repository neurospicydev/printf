#! /bin/bash
gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 test.c ../*.c -o prog
./prog
rm ./prog