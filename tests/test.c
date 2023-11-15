#include "../main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    int num = 42;
    int *ptr = &num;
    int ret = 0;
    ui = (unsigned int)INT_MAX + 1024;

    /* Task 01 */
    len = _printf("%d\n", ui);
    len2 = printf("%d\n", ui);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%d\n", -1024);
    len2 = printf("%d\n", -1024);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%d\n", INT_MIN);
    len2 = printf("%d\n", INT_MIN);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
    len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%i\n", -1024);
    len2 = printf("%i\n", -1024);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%i", ui);
    len2 = printf("%i", ui);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%i - %i = %i\n", 1024, 2048, -1024);
    len2 = printf("%i - %i = %i\n", 1024, 2048, -1024);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Task 03 */

    len = _printf("%u\n", UINT_MAX + 1024U);
    len2 = _printf("%u\n", UINT_MAX + 1024U);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Task 06 */

    len = _printf("%p", NULL);
    len2 = printf("%p", NULL);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
    len2 = printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
    len2 = printf("Can you print an address?\n%p\nNice!\n", (void *)-1);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Others */

    ret = _printf("%c %d %o %x %R\n", 'A', 10, 100, 1000, "Hello from printf!");
    ret = printf("%c %d %o %x %s\n", 'A', 10, 100, 1000, "Hello from printf!");

    _printf("printf returns %d bytes\n", ret);
    printf("printf returns %d bytes\n", ret);

    printf("%+d\n", 42);
    printf("%+d\n", 42);

    _printf("% d\n", 42);
    printf("% d\n", 42);

    _printf("INT MIN = %d\n", INT_MIN - 1024L);
    printf("INT MIN 2 = %d\n", INT_MIN - 1024L);

    _printf("INT MAX = %d\n", INT_MAX + 1024L);
    printf("INT MAX 2 = %d\n", INT_MAX + 1024L);

    _printf("Pointer address: %p\n", (void *)ptr);
    printf("Pointer address: %p\n", (void *)ptr);

    _printf("%S\n", "Best\nSCSchool");
    len = _printf("Let's try to %%%%%% printf%s a %s simple %sentence.\n");
    len2 = printf("Let's try to %%%%%% printf%s a %s simple %sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    len = _printf("\0");
    len2 = printf("\0");

    _printf("Negative:[%d]\n", -762534000);
    printf("Negative:[%d]\n", -762534000);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);

    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Character:[%c]\n", 97);
    printf("Character:[%c]\n", 97);

    _printf("98 to binary = %b\n", 98);
    printf("98 to binary = %b\n", 98);

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Basic string printing */
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    /* Negative and unsigned integers */
    _printf("Negative:[%d]\n", -762534000);
    printf("Negative:[%d]\n", -762534000);
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    /* Unsigned octal and hexadecimal */
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    /* Character printing */
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    /* Binary representation of a number */
    _printf("98 to binary = %b\n", 98);
    printf("98 to binary = %b\n", 98);

    /* String printing */
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    /* Percent sign printing */
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Unknown specifier */
    _printf("Unknown:[%?]\n");
    printf("Unknown:[%?]\n");

    return (0);
}
