/**
 * free_grid - frees a 2D grid
 * @grid: double pointer to integer
 * @height: rows of the 2D
 * Return: always success
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	if (height <= 0)
	{
		return;
	}

	for(i = 0; i < height; ++)
	{
		free(grid[i]);
	}

	free(grid);
}
