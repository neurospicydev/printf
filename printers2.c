#include "main.h"

/**
 * print_percentage - A function that prints % to stdout.
 * @args: List of arguments.
 *
 * Return: 1 (Always)
 */
int print_percentage(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
