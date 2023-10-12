#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (success)
 *
 */


void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

