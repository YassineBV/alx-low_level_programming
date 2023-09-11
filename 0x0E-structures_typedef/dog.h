#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This struct stores information about a dog,
 * including its name, age, and owner.
 */

struct dog {
	char *name;
	float age;
	char *owner;
};
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
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
