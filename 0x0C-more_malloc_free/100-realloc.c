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
	unsigned int i, realsize;
	int ** realc;

	if (new_size > old_size)
		new_size == 0;
	if (new_size == old_size)
		return (ptr);
	
	realsize = new_size;

	realc = (int**)calloc(old_size, new_size);


}