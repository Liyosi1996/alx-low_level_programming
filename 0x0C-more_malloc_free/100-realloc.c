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
	unsigned char *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
		return (NULL);
	a = 0;
	if (new_size > old_size)
	{
		while (a < old_size)
		{
			p[a] = ((char *)ptr)[a];
			a++;

		}
		free(ptr);
		return (p);
	}
	while (a < new_size)
	{
		p[a] = ((char *)ptr)[a];
		a++;
	}
	free(ptr);
	return (p);
}
