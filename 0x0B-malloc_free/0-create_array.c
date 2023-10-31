#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of array
 * @c: the char to initialize the array
 *
 * Return: Success, pointer to the array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
