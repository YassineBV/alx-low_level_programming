#include "main.h"
/**
 * set_bit - Sets the bit at a specific index in an unsigned long integer.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to set.
 *
 * Return: 1 if the bit was successfully set.
 */
int set_bit(unsigned long int *n, unsigned int index)
{


	*n |=  (1UL << index);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);


	if (*n >= ULONG_MAX)
		return (-1);
	return (1);
}
