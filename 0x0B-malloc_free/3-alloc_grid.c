/**
 * alloc_grid - Allocate a 2D array of integers
 * @width: Width of the given grid
 * @height: Height of the given grid
 *
 * This function allocates a 2D array of integers with the specified width and height.
 * The grid is initialized with all elements set to 0.
 *
 * Return: A pointer to the allocated grid, or NULL in case of failure
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocate a 2D array of integers
 * @width: Width of the given grid
 * @height: Height of the given grid
 *
 * Return: Apointer to the allocated grid, or the NULL incase of failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
		}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}


	return (grid);
// Remove the closing brace that is causing the "expected a declaration" error
// }

