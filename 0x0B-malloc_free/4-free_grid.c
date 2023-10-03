#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: double pointer to integer
 * @height: rows of the 2D
 * Return: always success
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		return;
	}

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
