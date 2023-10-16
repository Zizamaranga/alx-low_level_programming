#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints characters in reverse
 * @s: The string to be reversed
 * Return: Always 0 (Success)
 *
 */



void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
