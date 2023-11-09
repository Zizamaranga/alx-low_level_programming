#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *current_string;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(strings, char *);
		if (current_string == NULL)
		{
			char *nil = "(nil)";

			while (*nil)
			{
				_putchar(*nil);
				nil++;
			}
		}
		else
		{
			while (*current_string)
			{
				_putchar(*current_string);
				current_string++;
			}
		}

		if (separator != NULL && i != n - 1)
		{
			while (*separator)
			{
				_putchar(*separator);
				separator++;
			}
		}
	}

	_putchar('\n');
	va_end(strings);
}

