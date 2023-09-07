#include "main.h"
int *array_range(int min, int max)
{
    int i, size;
    int *ptrint;

    if (min > max)
        return (NULL);
    size = max - min + 1;

    if (size == 0)
        return (NULL);
    ptrint = (int *)malloc(size * sizeof(int));
    if (ptrint == NULL)
        return (NULL);
    for (i = 0; i < size; i++, min++)
        ptrint[i]= min;
    
    return (ptrint);
}