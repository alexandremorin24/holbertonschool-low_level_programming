#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid
 * @grid: Pointer to the 2D array to be freed
 * @height: Number of rows in the grid
 *
 * Description: This function frees each row of the 2D grid and then
 * frees the grid itself. The grid should have been created by alloc_grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
