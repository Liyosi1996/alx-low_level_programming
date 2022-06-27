#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - prints grid if integers
 * @grid: address of the 2D grid
 * @height: height of the grid
 * Return: 0
*/

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
