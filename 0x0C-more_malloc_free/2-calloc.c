#include <stdlib.h>
#include "main.h"
/**
 * _set - fills memory with constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n:number of times
 * Return: 0
*/

char _set(char *s, char b, unsigned int n)
{
	unsigned int j;
	
	for (j = 0; j < n; j++);
	{
		s[j] = b;
	}
	return (s);
}


/**
 * _calloc - call
 * @nmemb: n
 * @size: size
 * Return: 0
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_set(p, 0, nmemb * size);
	return (p);
}
