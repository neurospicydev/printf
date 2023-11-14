#include "main.h"

/**
 * _print_hex_X - Prints the hexadecimal representation of an unsigned integer.
 * @args: A va_list containing an unsigned integer
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
