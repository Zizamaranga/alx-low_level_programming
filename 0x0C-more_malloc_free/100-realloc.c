#include <stdlib.h>

/**
 * _realloc - reallocates memory block utilising malloc & free
 * @ptr: pointer to memory previously allocated by malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: On success, a pointer to the reallocated memory block.
 * On failure, NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i, limit;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			return (NULL);
		}
		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (new == NULL)
	{
		return (NULL);
	}

	limit = old_size < new_size ? old_size : new_size;

	for (i = 0; i < limit; i++)
	{
		*((char *)new + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (new);
}

