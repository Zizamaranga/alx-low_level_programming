#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function which returns sum of all parameters
 * @n: no of arguments
 *
 * Return: sum of the parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

