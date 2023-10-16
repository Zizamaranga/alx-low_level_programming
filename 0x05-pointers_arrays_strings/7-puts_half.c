#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i, start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}

	else
	{
		start = (len + 1) / 2;
	}

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

