#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function frees the memory allocated for the name, owner,
 * and the dog structure itself.
 */
void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
