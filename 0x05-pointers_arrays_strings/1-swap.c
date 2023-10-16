#include "main.h"
/**
 * swap_int - Entry point
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: Always 0  (Success)
 *
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
