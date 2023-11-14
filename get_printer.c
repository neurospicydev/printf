#include "main.h"
#include <stdarg.h>

/**
 * get_printer - Gets the appropriate printer function based on the specifier.
 * @specifier: The specifier character for the type of argument.
 *
 * Return: A function pointer to the corresponding printer function.
 */
int (*get_printer(char specifier))(va_list args)
{
	size_t i = 0;
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_digit},
		{'i', print_digit},
	};

	for (i = 0; i < sizeof(printers) / sizeof(printers[0]); i++)
	{
		if (specifier == printers[i].specifier)
			return (printers[i].func);
	}

	return (NULL);
}
