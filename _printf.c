#include "main.h"

int _printf(const char *format, ...)
{
    char c;
    int char_printed = 0;
    va_list arg_p;

    if (format == NULL)
    {
        _putchar('\n');
        return (-1);
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
            switch (*format)
            {
                case '%':
                    write(1, format, 1);
                    char_printed++;
                    break;
                case 'c':
                    c = va_arg(arg_p, int);
                    write(1, &c, 1);
                    char_printed++;
                    break;
                case 'd':
                case 'i':
                    print_digit(va_arg(arg_p, int));
                    char_printed++;
                    break;
                case 's':
                    print_string(va_arg(arg_p, char *));
                    char_printed++;
                    break;
            }
        }
        format++;
    }
    va_end(arg_p);
    return (char_printed);
}

