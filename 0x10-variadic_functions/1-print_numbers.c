#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		if (num == 0)
			_putchar('0');

		if (num > 0)
		{
			int rev = 0, temp_num = num;

			while (temp_num > 0)
			{
				rev = rev * 10 + temp_num % 10;
				temp_num /= 10;
			}

			while (rev > 0)
			{
				_putchar((rev % 10) + '0');
				rev /= 10;
			}
		}

		if (separator != NULL && i < n - 1)
		{
			while (*separator)
			{
				_putchar(*separator);
				separator++;
			}
		}
	}

	_putchar('\n');
	va_end(args);
}

