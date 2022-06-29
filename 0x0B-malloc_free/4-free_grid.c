#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid
 * @grid: pointer
 * @height: integer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
