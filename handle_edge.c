#include "main.h"

/**
 *  char_slash - A function to handle slashes
 *  @c: characters to check
 *
 *  Return: void functions have no return value
 */

void char_slash(char c)
{

	if (c == 'n')
		write(1, "\n", 1);
	else if (c == 'b')
		write(1, "\b", 1);
	else if (c == 'f')
		write(1, "\f", 1);
	else if (c == 'r')
		write(1, "\r", 1);
	else if (c == 't')
		write(1, "\t", 1);
	else if (c == 'a')
		write(1, "\a", 1);
}

/**
 * backslash - A function to handle back slashes
 * @c: characters to check
 *
 * Return: The number of characters printed
 */

int backslash(char c)
{
	int char_count = 0;

	if (c == '\\')
		char_count = write(1, "\\", 1);
	else if (c == '\'')
		char_count = write(1, "\'", 1);
	else if (c == '0')
		char_count = write(1, "\0", 1);
	else if (c == '\"')
		char_count = write(1, "\"", 1);

	char_slash(c);
	return (char_count);
}
