#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D array of integers
 * @grid: 2D array of integers to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
