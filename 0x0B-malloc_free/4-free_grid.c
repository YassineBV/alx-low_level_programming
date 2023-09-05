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
int i;
    {
        for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

	
