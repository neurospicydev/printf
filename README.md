# Custom Printf Function

## Introduction
This is a simplified implementation of the `printf` function in C. The `printf` function is a standard library function in C that is used for formatted output. In this custom implementation, we aim to replicate some basic functionality of the standard `printf` by supporting a limited set of format specifiers.

## Function Prototype
int _printf(const char *format, ...);

## Usage
_printf function takes a format string as its first argument, followed by any additional arguments required by the format specifiers. The format string can contain ordinary characters and format specifiers, similar to the standard printf.

Supported Format Specifiers
%c: Character
%s: String
%d: Integer
%i: Placeholder for an integer value (used interchangeably with %d)
%%: Percent sign
