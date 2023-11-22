#include "main.h"

/**
 * _print_hex_X - Prints the hexadecimal representation of an unsigned integer.
 * @num: Number to convert to hexadecimal and print
 *
 * Return: The count of characters printed.
 */
int _print_hex_X(unsigned int num)
{
	int count = 0, i = 0, hex[32];

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
				_putchar(hex[i] - 10 + 'A');
			}
			count++;
		}
	}

	return (count);
}

/**
 * _print_pointer - Prints the hexadecimal representation of a pointer.
 * @address: address to convert to hexadecimal and print it lower cased
 *
 * Return: The count of characters printed.
 */
int _print_pointer(unsigned long int address)
{
	int count = 0, i = 0, hex[32];

	/* Print "0x" pointer prefix */
	count += _print_string("0x");

	if (address == 0)
		count += _putchar('0');
	else
	{
		while (address > 0)
		{
			hex[i] = address % 16;
			address = address / 16;
			i++;
		}

		for (i = i - 1; i >= 0; i--)
		{
			if (hex[i] < 10)
				count += _putchar(hex[i] + '0');
			else
			{
				count += _putchar(hex[i] - 10 + 'a');
			}
		}
	}

	return (count);
}
