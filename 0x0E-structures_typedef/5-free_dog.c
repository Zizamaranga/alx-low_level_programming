#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory 
 * @d: A pointer to the dog to free
 *
 * Description: This function frees the memory
 * allocated for the dog's name and owner,
 * as well as the memory allocated for the dog itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

