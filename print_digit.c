#include "main.h"

/**
 * print_digit - A function that prints a digit or number
 * to the standard output stream
 * @num: the number to print
 *
 * Return: Always 0 (Success)
 *
 */
int print_digit(int num)
{
	int i = 0, j, count = 0;
	char buff[1024];

	if (num == 0)
	{
		_putchar('0');
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num != 0)
	{
		buff[i++] = '0' + (num % 10);
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &buff[j], 1);
		count++;
	}

	return (count);
}

