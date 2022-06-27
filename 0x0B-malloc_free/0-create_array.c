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
	unsigned int b;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)

		return (NULL);

	for (b = 0; b < size; a++)
	{
		s[b] = c;
	}
	return (s);
}

