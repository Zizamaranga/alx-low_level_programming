#include "main.h"
#include <stdio.h>
/**
 * _puts - Entry point
 * @str: pointer to a string
 *
 *
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
