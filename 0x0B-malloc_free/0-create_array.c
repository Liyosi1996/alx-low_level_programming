#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of char
 * @size: length of an array
 * @c: input char
 * Return: 0
 *
*/

char *create_array(unsigned int size, char c)
{
	unsigned int b = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)

		return (0);

	for (b = 0; b < size; b++)
	{
		ptr[b] = c;
	}
	return (ptr);
}

