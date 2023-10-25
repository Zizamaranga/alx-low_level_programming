#include "main.h"
#include <stdio.h>

/**
 * is_divisible - Checks if n is divisible thats not 1
 * @n: The number
 * @i: The divisor
 * Return: 1 if n is divisible by i, or 0
 */
int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);

	if (n % i == 0)
		return (1);
	return (is_divisible(n, i - 1));
}

/**
 * is_prime_number - if a number is a prime number
 * @n: The number
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}

