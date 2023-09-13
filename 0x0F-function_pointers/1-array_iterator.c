
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Execute action on each element.
 * @array: Integer array.
 * @size: Size of the array.
 * @action: Pointer to function to perform an action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action != NULL)
	{

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
