#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to
 * including the terminating null byte (\0)
 * to the buffer pointed to by the dest
 * @dest: destination
 * @src: source
 * Return: 0
*/

char *_strcpy(char *dest, char *src)
{

	int len = 0, i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)

		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
