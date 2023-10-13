#include <stdio.h>
/**
 * largestPrimeFactor - Entry point
 * @n: The number in question.
 * Return: maxPrime (Success)
 *
 */

long largestPrimeFactor(long n)
{
	long maxPrime = -1;

	while (n % 2 == 0)

	{
		maxPrime = 2;
		n >>= 1;
	}

	long i;

	for (long i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}
	return (maxPrime);
}


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long num = 612852475143;

	long result = largestPrimeFactor(num);

	printf("%ld\n", result);
	return (0);
}
