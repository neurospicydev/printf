#! /bin/bash
gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c ../*.c -o prog
./prog
rm ./prog