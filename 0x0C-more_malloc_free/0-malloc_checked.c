#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *mallocptr;

	mallocptr = malloc(b);
	if (mallocptr == NULL)
	{
		exit(98);
	}
	return (mallocptr);
}