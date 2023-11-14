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

/**
 * print_octal - Prints the octal representation of an unsigned integer.
 * @args: A va_list containing an unsigned integer
 *
 * Return: The count of characters printed.
 */
int print_octal(va_list args)
{
	int count = 0, i = 0, oct[32];
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			oct[i] = num % 8;
			num = num / 8;
			i++;
		}

		for (i = i - 1; i >= 0; i--)
		{
			_putchar(oct[i] + '0');
			count++;
		}
	}

	return (count);
}
