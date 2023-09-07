#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *c;
	int *i;
	float *f;
	double *d;

	c = malloc(sizeof(char) * b);
	if (c == NULL)

		exit(98);
	return (c);
	i = malloc(sizeof(int) * b);
	if (i == 0)
	{
		exit(98);
	}
	return (i);
	f = malloc(sizeof(float) * b);
	if (f == 0)
	{
		exit(98);
	}

	return (f);
	d = malloc(sizeof(double) * b);
	if (d == 0)
	{
		exit(98);
	}
	return (d);
}
