#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a two dimensional array
 * @grid: two dimensional grid
 * @height: height of the grid
 * Return: always 0
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
