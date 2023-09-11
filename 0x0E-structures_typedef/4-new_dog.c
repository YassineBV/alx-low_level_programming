#include <stdio.h>
#include "dog.h"
member_Lent(char *memb)
{
	imt i = 0;
	while (memb != '\0' && memb[i])
	{
		i++
	}
	return (i);
}
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
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = (dog_t *)malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);
	
	dog1->name = malloc(member_Lent(name) + 1);
	if (dog1->name == NULL)
		free(dog1);
		return (NULL);
	
	dog1->owner =malloc(member_Lent(owner) + 1);
	if (dog1->owner == NULL)
		free(dog->name);
		free(dog1);
		return (NULL);
	
	dog1->name = _strcpy(dog1->name, name);
	dog1->age = age;
	dog1->owner = _strcpy(dog1->owner, owner);

	return (dog1);
	

}