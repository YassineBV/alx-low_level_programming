#include "main.h"
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
void free_grid(int **grid, int height)
{
	int i, j;
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(grid[j]);
				}
				free(grid);

			}

		}
	}
}
	

	
