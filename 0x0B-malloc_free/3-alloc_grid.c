#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry of the program
 *
 *@width: function that returns a pointer
 *@height: to a 2 dimensional array of integers.
 *Return: eturns a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **doublgrid;
	int i;

	if (width == 0)
	{
		return (NULL);
	}
	if (height == 0)
	{
		return (NULL);
	}

	doublgrid = (int **)malloc(width * sizeof(int *));
	if (doublgrid == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			doublgrid[i] = (int *)malloc(height * sizeof(int));
		}
	}
	return (doublgrid);
}
