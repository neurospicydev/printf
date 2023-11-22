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

	if (address == 0)
		return (_print_string("(nil)"));

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

/**
 * print_rot13 - Prints a rot13 encoded string
 * @args: A va_list containing the pointer
 *
 * Return: The count of characters printed.
 */
int print_rot13(va_list args)
{
	char *s = va_arg(args, char *);

	return (_print_rot13(s));
}
