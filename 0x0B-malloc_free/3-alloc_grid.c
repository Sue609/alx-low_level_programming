#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer.
 * @width: width f the grid.
 * @height: height of the grid.
 *
 * Return: NULL or w or h.
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;

if (height <= 0 || width <= 0)
{
return (NULL);
}

grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}

free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
