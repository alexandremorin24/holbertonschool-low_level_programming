#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D grid of integers and initializes it to 0
 * @width: the width of the grid (number of columns)
 * @height: the height of the grid (number of rows)
 *
 * Description: This function creates a 2D grid of integers with dimensions
 * specified by `width` and `height`. Each element of the grid is initialized
 * to 0. If width or height is 0 or negative, the function returns NULL.
 * On failure to allocate memory, the function also returns NULL.
 *
 * Return: pointer to the allocated 2D grid, or NULL if allocation fails
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **tableau;

	if (width <= 0 || height <= 0)
		return (NULL);

	tableau = malloc(height * sizeof(int *));

	if (tableau == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tableau[i] = malloc(width * sizeof(int));

		if (tableau[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tableau[i][j] = 0;
		}
	}

	return (tableau);
}
