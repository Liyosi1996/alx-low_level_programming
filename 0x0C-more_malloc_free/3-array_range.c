#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: 0
*/

int *array_range(int min, int max)
{
	int *p;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		p[j] = min++;

	return (p);
}
