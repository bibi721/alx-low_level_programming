#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional array
 * @height: the heigh
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	int in;

	for (in = 0; in < height; in++)
		free(grid[in]);

	free(grid);

}
