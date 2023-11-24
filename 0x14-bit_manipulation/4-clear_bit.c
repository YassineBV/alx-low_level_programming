#include "main.h"
/**
 * clear_bit - Clears the bit at a specific index in an unsigned long integer.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if the bit was successfully cleared.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);
    *n &= (~(1UL << index));
    
    if (*n >= ULONG_MAX)
        return (-1);
    return (1);
    
}
