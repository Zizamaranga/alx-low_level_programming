#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root
 * @n: The number
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (n);
	}

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Finds the square root of a number
 * @n: The number
 * @i: The iterator to check square root
 * Return: The natural square root of n, or -1
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}
