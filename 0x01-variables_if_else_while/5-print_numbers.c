#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}

	printf("\n");

	return (0);
}
