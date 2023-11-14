#include "main.h"

/**
 * _printf - Custom printf function that handles string formatting.
 * @format: Format string containing types of arguments.
 *          c: char
 *          d: integer
 *          s: string
 * @...: Variable number of arguments.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int char_printed = 0;
	int (*print)(va_list);
	va_list arg_p;

	if (format == NULL)
	{
		_putchar('\n');
		return (char_printed);
	}

	va_start(arg_p, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_printed++;
		}

		else if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				char_printed++;
			}

			print = get_printer(*format);
			if (print != NULL)
				char_printed += print(arg_p);
			else if (*format != '%')
			{
				/* Handle unknown specifier */
				_putchar('%');
				_putchar(*format);
				char_printed += 2;
			}
		}
		format++;
	}
	va_end(arg_p);
	return (char_printed);
}
