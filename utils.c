#include "main.h"
#include <stdlib.h>
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
