#include <stdlib.h>
#include "main.h"

/**
 * _calloc - call
 * @nmemb: n
 * @size: size
 * Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (memory  == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(s + i) = 0;
	return ((void *)s);
}
