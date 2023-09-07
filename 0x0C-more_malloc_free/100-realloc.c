#include "main.h"
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    unsigned int i, realsize;
    int ** realc;

    if (new_size > old_size)
        new_size == 0;
    if (new_size == old_size)
        return (ptr);
    
    realsize = new_size;

    realc = (int**)calloc(old_size + new_size);

    if  (ptr == NULL)
        malloc(old_size) = malloc(new_size);
}