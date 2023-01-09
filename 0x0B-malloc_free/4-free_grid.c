#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees previously created 2d integer grid
 * @grid: pointer to array of ints
 * @height: number of rows
 * Return: nothing, frees memory
 **/

void free_grid(int **grid, int height)

{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
