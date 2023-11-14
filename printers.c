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

/**
 * print_uint - A function that prints a uint to the standard output stream
 * @args: List of arguments
 *
 * Return: Number of digits printed (Success)
 *
 */
int print_uint(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);

	return (_print_number(num));
}

/**
 * print_binary - Prints the binary representation of an unsigned integer.
 * @args: A va_list containing the unsigned integer to print in binary.
 *
 * Return: The count of characters printed.
 */
int print_binary(va_list args)
{
	int count = 0, i = 0, bin[32];
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
			bin[i] = num % 2;
			num = num / 2;
			i++;
		}

		for (i = i - 1; i >= 0; i--)
		{
			_putchar(bin[i] + '0');
			count++;
		}
	}

	return (count);
}