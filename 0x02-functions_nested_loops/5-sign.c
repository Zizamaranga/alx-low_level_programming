#include "main.h"

/**
 * print_sign - entry point
 *
 *
 * @n: scans all numbers
 *
 * Return: Always 0 or 1 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		return (0);
}
