#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry of the program
 *
 *@grid: function that frees a 2 dimensional grid
 *@height: previously created by your alloc_grid function
 *Return: void
*/
void free_grid(int **grid, int height)
{
int i;
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

