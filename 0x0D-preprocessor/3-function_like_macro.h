#include <stdio.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))
/*
 * main - Entry point
 * Return: 0 success
 *
 */
int main(void)
{
	int n = -42;
	int abs_n = ABS(n);
	printf("The absolute value of %d is %d\n", n, abs_n);
	return (0);
}

