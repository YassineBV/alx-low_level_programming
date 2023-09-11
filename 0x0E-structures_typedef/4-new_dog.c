#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * member_Lent - Calculates the length of a string.
 * @memb: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int member_Lent(char *memb)
{
	int i = 0;

	while (memb && memb[i])
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - Creates a new dog structure and initializes its values.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the new dog structure.
 *         NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = (dog_t *)malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);

	dog1->name = malloc(member_Lent(name) + 1);
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->owner = malloc(member_Lent(owner) + 1);
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	dog1->name = _strcpy(dog1->name, name);
	dog1->age = age;
	dog1->owner = _strcpy(dog1->owner, owner);

	return (dog1);

}
