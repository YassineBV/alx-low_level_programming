#include"main.h"
#include <limits.h>
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
