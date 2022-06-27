#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates 2D array
 * @width: width of grid
 * @height: height of grid
 * Return:0
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *) malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			free(ptr);
			for (b = 0; b <= a; b++)
				free(ptr[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}
