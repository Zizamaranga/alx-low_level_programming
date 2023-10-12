#include "main.h"

/**
 * print_diagonal - Entry Point
 *
 *
 * @n: Number of times the character '\' should be printed
 */


void print_diagonal(int n)
{
	int f = 0;
	int b = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		while (b < n)
		{
			while (f < b)
			{
				_putchar(' ');
				f++;
			}
			_putchar('\\');
			_putchar('\n');
			f = 0;
			b++;
	}
	}
}
