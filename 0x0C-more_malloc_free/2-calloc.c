#include <stdlib.h>

/**
 * _calloc - allocates memory an array
 * @nmemb: the number of elements
 * @size: size of every element
 *
 * Return: Success, pointer to allocated memory.
 * Failure, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)p + i) = 0;
	}

	return (p);
}

