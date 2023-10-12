#include "main.h"
/**
 * print_last_digit - Entry point
 *
 *
 * @d: integer
 *
 *
 * Return: Always 0 (Success)
 *
 */

int print_last_digit(int d)
{
	int r;

	if (d < 0)

	{
		r = (-d % 10);
	}
	else
	{
		r = (d % 10);
	}

	_putchar(0 + r);
	_putchar(0 + r);
	return (r);
}
