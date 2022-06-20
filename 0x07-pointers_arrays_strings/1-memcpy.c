#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @dest: copy the memory to
 * @src: copy the memory from
 * Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
