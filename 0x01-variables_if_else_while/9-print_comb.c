#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers un ascending order.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n + '0');
		if (n < '9' && n != '0')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}



