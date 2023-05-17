#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * @grid: 2 dimensional grid
 * @height: height of the grid
 * Description: frees memory of grid previously created
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
