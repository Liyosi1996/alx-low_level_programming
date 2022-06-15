#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * src doesnt need to be null-terminated
 * @dest: string to be appended to
 * @src: strings whose characters to add to dest
 * @n: number of characters to copy from src
 * Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
