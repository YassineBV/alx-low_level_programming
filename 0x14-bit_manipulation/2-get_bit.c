#include"main.h"
int get_bit(unsigned long int n, unsigned int index)
{
    int bitstat;

    bitstat = n & (1 << index);
    if (bitstat != 0)
        return (1);
    return (0);

}
