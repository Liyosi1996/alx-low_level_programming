#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @s: pointer to  memory area
 * @n: number of bytes
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
