#include "main.h"
/**
 * _realloc - Reallocate memory for a pointer from old_size to new_size.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: Old size of the allocated memory.
 * @new_size: New size to allocate.
 *
 * Return: Pointer to the reallocated memory or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *realcptr;
	unsigned int i;
	char *p;
	char *q;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	    free(ptr);
		return (NULL);
		
	realcptr = malloc(new_size);
	if (realcptr == NULL)
	    return (NULL);
	
	if (ptr == NULL)
	    return (realcptr);
	
	p = realcptr;
	q = ptr;
	
	for (i = 0; i < old_size && i < new_size; i++)
		{
			p[i] = q[i];
		}
	
	free(ptr);
	return (realcptr);
}
