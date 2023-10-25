#include "main.h"
/**
 * factorial - finds factorial of a number
 * @n: the number the factorial is sought
 * Return: -1 or factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
