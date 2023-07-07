#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a grid previously created
 * @grid: the grid
 * @height: an int
 */
void free_grid(int **grid, int height)
{
	int clr;

	for (clr = 0; clr < height; clr++)
		free(grid[clr]);

	free(grid);
}
