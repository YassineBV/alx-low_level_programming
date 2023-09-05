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
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	doublgrid = (int **)malloc(height * sizeof(int *));
	if (doublgrid == NULL)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; i < height; i++)
		{
			doublgrid[i] = (int *)malloc(width * sizeof(int));
			if (doublgrid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(doublgrid[j]);
				}
				free(doublgrid);
				return (NULL);
			}
		}
		return (doublgrid);
	}

	return (0);
}
