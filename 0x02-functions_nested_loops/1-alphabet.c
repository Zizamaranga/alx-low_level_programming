#include "main.h"
/**
 * void -Entry Point
 * description - prints alphabet
 *
 *
 *
 * Return: Always 0 (Success)
 *
 *
 */

void print_alphabet(void)
{
	char letter = 'a';
	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	{
		_putchar("\n");
		return (0);
	}
}

