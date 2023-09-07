#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    void *mallocInt;

    if (size == 0 || nmemb == 0)
        return (NULL);
    
    mallocInt = malloc(size * nmemb);
    if (mallocInt == NULL)
        return (NULL);
    for (i = 0; i < nmemb; i++)
    {
        return (mallocInt);
    }
    return (NULL);
}
