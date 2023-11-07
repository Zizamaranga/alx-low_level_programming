#include <stddef.h>

/**
 * struct dog - struct that represents chars of dog.
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Description: This struct represents the
 * characteristics of a dog including its name,
 * age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - Initialize variable of type struct dog
 * @d: A pointer to the struct dog initialize
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Description: This function initializes
 * the elements of a struct dog with the
 * provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}


