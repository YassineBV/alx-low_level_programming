#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array of nmemb
 *           and initializes the memory to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: If nmemb or size is 0, or if malloc fails, returns NULL;
 * null otherwise, returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mallocInt;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mallocInt = calloc(nmemb, size);
	if (mallocInt == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		return (mallocInt);
	}
	free(mallocInt);
	return (NULL);
}
