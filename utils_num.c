#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * count_digits - Calculates the number of digits in a given number.
 * @n: The number for which digits need to be counted.
 *
 * Return: The number of digits.
 */
int count_digits(unsigned long n)
{
	int count = 0;

	if (n == 0)
		return (1);

	while (n > 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}

/**
 * _print_number - Prints a number and returns the number of characters printed
 * @n: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int _print_number(unsigned long n)
{
	int num_digits, *digits, i;

	/* Handle special case when n is 0 */
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	num_digits = count_digits(n);
	digits = malloc(num_digits * sizeof(int));

	if (digits == NULL)
	{
		/* TODO: Should exit failure */
		return (0);
	}

	/* Extract digits and store them in the array */
	for (i = num_digits - 1; i >= 0; i--)
	{
		digits[i] = n % 10;
		n /= 10;
	}

	for (i = 0; i < num_digits; i++)
	{
		_putchar(digits[i] + '0');
	}

	/* Free digits array */
	free(digits);

	return (num_digits);
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
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	return (_print_number((unsigned long)num));
}
