#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: grid
 * @height: height
 */
=======

/**
 * free_grid - free grid
 * @grid: grid
 * @height: height
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
