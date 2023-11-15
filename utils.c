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
	static char buffer[BUFFSIZE];
	static int i;

	if (i == sizeof(buffer) - 1)
	{
		write(1, buffer, i);
		i = 0;
	}

	buffer[i] = c;
	i++;

	if (i > 0)
	{
		write(1, buffer, i);
		i = 0;
	}
	return (1);
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
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		len++;
		str++;
	}
	str = start;

	return (len);
}

/**
 * _print_str_rev - A function that prints a string to stdout.
 * @str: pointer to the address of the string to be printed.
 *
 * Return: Always 0 (Success)
 */
int _print_str_rev(char *str)
{
	int len = 0, i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}

/**
 * encodeChar - Encodes a character using the ROT13 cipher.
 *
 * @c: The character to be encoded.
 *
 * Return: The ROT13-encoded character.
 */
char encodeChar(char c)
{
	int alphabetSize = 26, base;

	/*Check if the character is an alphabet*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{

		/* Determine the base value for the character type */
		base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

		/* ROT13 encoding */
		return (((c - base + 13) % alphabetSize) + base);
	}

	/*If the character is not an alphabet, return the character as it is*/
	return (c);
}

/**
 * _print_rot13 - Encodes a string using the ROT13 cipher.
 *
 * @str: Pointer to a string.
 *
 * Return: Pointer to the ROT13-encoded string.
 */
int _print_rot13(char *str)
{
	char *start = str;
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(encodeChar(*str));
		len++;
		str++;
	}
	str = start;

	return (len);
}
