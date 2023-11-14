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

/**
 * print_hex_x - Prints the hexadecimal representation of an unsigned integer.
 * @args: A va_list containing an unsigned integer
 *
 * Return: The count of characters printed.
 */
int print_hex_x(va_list args)
{
	int count = 0, i = 0, hex[32];
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
			hex[i] = num % 16;
			num = num / 16;
			i++;
		}

		for (i = i - 1; i >= 0; i--)
		{
			if (hex[i] < 10)
				_putchar(hex[i] + '0');
			else
			{
				_putchar(hex[i] - 10 + 'a');
			}
			count++;
		}
	}

	return (count);
}

/**
 * print_hex_X - Prints the hexadecimal representation of an unsigned integer.
 * @args: A va_list containing an unsigned integer
 *
 * Return: The count of characters printed.
 */
int print_hex_X(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (_print_hex_X(num));
}

/**
 * print_custom_string - Prints the non printable chars in hex format.
 * @args: A va_list containing a character
 *
 * Return: The count of characters printed.
 */
int print_custom_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			count += _print_string("\\x");
			if (*str < 16)
				count += _putchar('0');

			count += _print_hex_X(*str);
		}
		else
			count += _putchar(*str);

		str++;
	}

	return (count);
}
