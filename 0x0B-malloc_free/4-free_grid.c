#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated by alloc grid
 * @grid: a 2d array created by alloc_grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
		free(grid[f]);

	free(grid);
}
