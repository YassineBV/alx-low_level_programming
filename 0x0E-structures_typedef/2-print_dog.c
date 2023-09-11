#include <stdio.h>
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
		if (d->name == NULL)
		{
			printf("name: (nil)");
		}
		else 
			printf("%s\n", d->name);
		if (d->age == 0)
		{
			printf("age: (nil)");
		}
		else 
			printf("%s\n", d->age);
		if (d->owner == NULL)
		{
			printf("owner: (nil)");
		}
		else
			printf("%s\n", d->owner);

	}
}
