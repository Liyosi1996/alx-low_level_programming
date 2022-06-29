#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: characters to copy from src
 * Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
