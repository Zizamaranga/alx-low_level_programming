#include <stdio.h>
#include  "dog.h"


/**
 * print_dog - Prints elements of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: This function prints
 * the elements of a struct dog. If an element of
 * the struct is NULL, it prints nil
 * instead of the element's value.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}

