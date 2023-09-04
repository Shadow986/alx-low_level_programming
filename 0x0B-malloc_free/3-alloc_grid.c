#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that allocate a 2-dimensional grid of integers
 * @width: The width (number of columns) of the grid
 * @height: The height (number of rows) of the grid
 * Return: the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
