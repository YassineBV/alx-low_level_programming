#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any field is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}

