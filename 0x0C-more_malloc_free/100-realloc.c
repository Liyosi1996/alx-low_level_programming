#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_realloc - reallocates memory block
 * @ptr: pointer to memory
 * @old_size: size
 * @new_size: new size
 * Return: 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *_p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	_P = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p[a] = _p[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p[a] = _p[a];
	}
	free(ptr);
	return (p);
}
