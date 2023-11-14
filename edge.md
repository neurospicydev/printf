# Edge Cases

- \r
- \t
- \b
- \f
- \n
- \a
- \0
- \\
- \'
- \"
- %c%c
- %/
- Have we handled how to print numbers as strings?
- Multiple Variables in a Single printf Statement
You can include multiple variables and literals in a single printf statement by separating them with commas:

Example:

int apples = 5, oranges = 3;

printf("I have %d apples and %d oranges.\n", apples, oranges);


#include "main.h"

int main(void)
{
    // Edge cases
    _printf("Carriage Return: %c\r", 'A');
    _printf("Tab: %c\t", 'B');
    _printf("Backspace: %c\b", 'C');
    _printf("Form Feed: %c\f", 'D');
    _printf("New Line: %c\n", 'E');
    _printf("Alert (bell): %c\a", 'F');
    _printf("Null Character: %c\0", 'G');
    _printf("Backslash: %c\\", 'H');
    _printf("Single Quote: %c\'", 'I');
    _printf("Double Quote: %c\"", 'J');
    _printf("Two Characters: %c%c", 'K', 'L');
    _printf("Percentage Symbol: %%c\n", 'M');
    _printf("This is a line of text.\n\tThis is indented.\n");

    return (0);
}

**Please note that the escape sequences like \r, \t, \b, \f, \n, \a, \0, \\, \', and \" are included in the test cases. The %c%c case prints two characters, and %/ is used to check how the function handles unknown specifiers. Adjust as needed based on your specific requirements.**

%s: Print as a null-terminated string.
%d or %i: Print as a decimal integer.
