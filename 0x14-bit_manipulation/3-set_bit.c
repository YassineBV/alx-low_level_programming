#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
    

    *n |=  (1UL << index);
    if (*n >= ULONG_MAX || index >= 64)
        return (-1);
    return (1);
}
