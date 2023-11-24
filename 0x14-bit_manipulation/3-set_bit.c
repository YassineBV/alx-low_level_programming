#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
    

    *n |=  (1UL << index);
    if (*n >= ULONG_MAX)
        return (-1);
    return (1);
}
