#include "main.h"

/**
 * print_char - A function that prints a character to stdout.
 * @args: List of arguments.
 *
 * Return: 1 (Always)
 */

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}

/**
 * print_string - A function that prints a string to stdout.
 * @args: List of arguments.
 *
 * Return: The number of characters printed (Success)
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	return (_print_string(s));
}

/**
 * print_digit - A function that prints a digit or number
 * to the standard output stream
 * @args: List of arguments
 *
 * Return: Number of digits printed (Success)
 *
 */
int print_digit(va_list args)
{
	int num = va_arg(args, int);

	return (_print_digit(num));
}
