#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates new dog with a copy of name $ owner
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Return: A pointer to the new dog,
 * or NULL if the function fails
 *
 * Description: This function creates a new
 * dog with the provided name, age, and owner.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

