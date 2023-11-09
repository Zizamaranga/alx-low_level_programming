#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    int divisor = 1;
    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                _putchar(va_arg(args, int));
                break;
            case 'i':

                {
                    int n = va_arg(args, int);
                    int divisor = 1;
                    if (n < 0)
                    {
                        _putchar('-');
                        n = -n;
                    }
                    while (n / divisor > 9)
                        divisor *= 10;
                    while (divisor != 0)
                    {
                        _putchar('0' + n / divisor);
                        n %= divisor;
                        divisor /= 10;
                    }
                }
                break;
            case 'f':

                {
                    double f = va_arg(args, double);
                    int int_part = (int)f;
                    int decimal_part = (int)((f - int_part) * 1000000);
                    if (f < 0)
                    {
                        _putchar('-');
                        int_part = -int_part;
                        decimal_part = -decimal_part;
                    }


                    while (int_part / divisor > 9)
                        divisor *= 10;
                    while (divisor != 0)
                    {
                        _putchar('0' + int_part / divisor);
                        int_part %= divisor;
                        divisor /= 10;
                    }
                    _putchar('.');

                    divisor = 100000;
                    while (divisor != 0)
                    {
                        _putchar('0' + decimal_part / divisor);
                        decimal_part %= divisor;
                        divisor /= 10;
                    }
                }
                break;
            case 's':

                str = va_arg(args, char *);
                if (str == NULL)
                {
                    str = "(nil)";
                }
                while (*str)
                {
                    _putchar(*str);
                    str++;
                }
                break;
        }

        if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[i + 1] != '\0')
        {
            _putchar(',');
            _putchar(' ');
        }
        i++;
    }

    _putchar('\n');
    va_end(args);
}

