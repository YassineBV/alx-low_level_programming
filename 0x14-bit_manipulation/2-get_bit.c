#include"main.h"
#include <limits.h>
/**
 * get_bit - Gets the value of a bit at a specific index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index.
 *         -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstat;

	bitstat = n & (1UL << index);
	if (bitstat != 0)
		return (1);
	if (n >= ULONG_MAX)
		return (-1);
	return (0);

}
