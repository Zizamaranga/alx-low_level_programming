#include "main.h"
/**
 * print_alphabet - entry point
 * main -Entry Point
 * description - prints alphabet
 *
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

