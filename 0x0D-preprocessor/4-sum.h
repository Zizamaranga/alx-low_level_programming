#include <stdio.h>

#define SUM(x, y) ((x) + (y))
/*
 * main - Entry point
 * Return: 0 Always
 */
int main(void)
{
	int a = 5;
	int b = 3;
	int r = SUM(a, b);
	printf("The sum of %d and %d is %d\n", a, b, r);
	return (0);
}

