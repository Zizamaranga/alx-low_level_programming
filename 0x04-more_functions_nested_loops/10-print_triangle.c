#include "main.h"

/**
 * print_triangle - entry point
 *
 *
 * @size: size of triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)

		{
			for (b = 1; b <= size; b++)
			{
				if (b <= size - a)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
