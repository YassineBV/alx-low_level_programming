#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Find index of element that matches cmp.
 * @array: Integer array.
 * @size: Size of the array.
 * @cmp: Pointer to comparison function.
 *
 * Return: Index of matching element, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp != NULL)
	{
		cmp(array[size]);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);


		}

	}
	return (-1);
}
