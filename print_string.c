#include "main.h"

/**
 * print_string - A function that prints a string to stdout.
 * @str: pointer to the address of the string to be printed.
 * 
 * Return: Always 0 (Success)
 */

int print_string(char *str)
{
	char *start = str;
	int len = 0;
	if (str == NULL)
		return (-1);

	while(*str != '\0')
	{
		write(1, str, 1);
		len++;
		str++;
	}
	str = start;
	return (0);
}

