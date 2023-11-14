#include "main.h"
#include <unistd.h>

/**
 * _putchar - Custom putchar function
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_digit - A function that prints a digit or number
 * to the standard output stream
 * @num: the number to print
 *
 * Return: Always 0 (Success)
 *
 */
int _print_digit(int num)
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

/**
 * _print_string - A function that prints a string to stdout.
 * @str: pointer to the address of the string to be printed.
 *
 * Return: Always 0 (Success)
 */

int _print_string(char *str)
{
	char *start = str;
	int len = 0;

	if (str == NULL)
		return (len);

	while (*str != '\0')
	{
		write(1, str, 1);
		len++;
		str++;
	}
	str = start;

	return (len);
}
