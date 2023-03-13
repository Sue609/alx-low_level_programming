#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid.
 * @grid: pointer to an array.
 * @height: height of the grid.
 *
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
