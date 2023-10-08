#include <stdio.h>

/**
 * main - Entry point
 *
 * description: This program writes all Hexadecimal numbers.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char n = 'a';
	int m = '0';

	while (n <= 'f')
	{
		putchar(n);
		n++;
	}

	while (m <= '9')
	{
		putchar(m);
		m++;
	}

	putchar('\n');
	return (0);
}
