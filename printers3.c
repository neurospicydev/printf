#include "main.h"

/**
 * print_pointer - Prints a pointer.
 * @args: A va_list containing the pointer
 *
 * Return: The count of characters printed.
 */
int print_pointer(va_list args)
{
	unsigned long address = va_arg(args, unsigned long);

	return (_print_pointer(address));
}

/**
 * print_reverse - Prints a string in reverse.
 * @args: A va_list containing the pointer
 *
 * Return: The count of characters printed.
 */
int print_reverse(va_list args)
{
	char *s = va_arg(args, char *);

	return (_print_str_rev(s));
}
