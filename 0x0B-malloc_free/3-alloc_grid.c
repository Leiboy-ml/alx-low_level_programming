#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocate memory to 2D array
 * @width: width of array
 * @height: height of array
 * Return: pointer or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
