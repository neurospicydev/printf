#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct printer - structure of the printer
 * for each format specifier
 * @specifier: format specifier
 * @func: an array of pointers to functions that take
 * variable pointer arguments as parameters and return
 * an int
 *
 * Description - structure of format specifier printer
 */

typedef struct printer
{
	char specifier;
	int (*func)(va_list args);
} printer_t;

/* Helpers */
int _putchar(char c);
int _print_digit(int num);
int _print_string(char *str);
int _print_number(unsigned long n);

/* Printers */
int print_char(va_list args);
int print_digit(va_list args);
int print_string(va_list args);
int print_binary(va_list args);
int print_uint(va_list args);
int print_percentage(va_list args);
int print_octal(va_list args);

int _printf(const char *format, ...);
int (*get_printer(char specifier))(va_list args);

#endif /* MAIN_H */
