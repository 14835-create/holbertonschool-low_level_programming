#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2D array integers
 *
 * @width: wdith of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array, or NULL
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **grid;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	for (h = 0; h < height; h++)
	{

	grid[h] = malloc(sizeof(int) * width);
	if (grid[h] == NULL)
	{
		while (h--)
			free(grid[h]);
		free(grid);
		return (NULL);
	}

	for (w = 0; w < width; w++)
		grid[h][w] = 0;
	}

	return (grid);
}
