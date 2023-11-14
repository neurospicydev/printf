#include "main.h"

/**
 * validityCheck - A function that sanitises the input
 * of custom printf
 * @format: pointer to the format string
S *
 * Return: returns 1 if valid, -1 otherwise
 */


int validityCheck(const char *format)
{
	if (format[0] == NULL || format[0] == '%' && format[1] == '\0')
		return (-1);
	if (format[0] == '%' && format[0] == ' ' && format[2] == '\0')
		return (-1);
	return (1);
}
