#include "main.h"
#include <stdio.h>
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
	int ch = 'a';
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	{
		putchar("\n");
		return (0);
	}
}

