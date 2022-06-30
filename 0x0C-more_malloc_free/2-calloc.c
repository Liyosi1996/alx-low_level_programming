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
	unsigned int a;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	P = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		*(p + a) = 0;
	return ((void *)p);
}