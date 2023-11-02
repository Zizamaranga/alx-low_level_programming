#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: min value
 * @max: max value
 *
 * Return: Success, pointer to newly created array.
 * Failure or if min > max, NULL.
 */
int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
	{
		return (NULL);
	}

	s = max - min + 1;

	a = malloc(s * sizeof(int));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s; i++)
	{
		a[i] = min + i;
	}

	return (a);
}

