# Custom Printf Function

This project is part of the ALX Mastercard foundation scholarship program. It aims to reproduce the `printf` function in C, enhanced by returning the number of characters printed.

## Table of Contents
- [Description](#description)
- [Features](#features)
- [Usage](#usage)
- [Files](#files)
- [Build](#build)
- [Authors](#authors)
- [License](#license)

## Description

The `_printf` function is a custom implementation of the `printf` function in C. It provides formatted output to the console and returns the number of characters printed. This project is developed as part of the ALX Mastercard foundation scholarship program.

## Features

- Custom implementation of the `printf` function.
- Returns the number of characters printed.

## Usage

To use the `_printf` function, include the appropriate header file and call it with the desired format and arguments.

```c
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int characters_printed = _printf("Hello, %s! This is a number: %d, and a character: %c\n", "world", 42, 'A');
    _printf("Number of characters printed: %d\n", characters_printed);
    return 0;
}
```

## Files

- `main.h`: Header file containing function prototypes.
- `_printf.c`: Main implementation of the `_printf` function.
- `printers.c`: Implementation of printers for different specifiers.
- `utils.c`: Implementation utility functions like _putchar, atoi etc.
- `README.md`: Project documentation.

## Build

Compile the project using a C compiler:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Authors

- Kami Loïc
- Nkem Ike-Morris

## License

This project is licensed under the MIT License.
