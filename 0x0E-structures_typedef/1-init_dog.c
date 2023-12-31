#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes a struct dog with the given values
 * for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
