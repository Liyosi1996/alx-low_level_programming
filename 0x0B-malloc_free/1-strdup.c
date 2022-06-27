#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string
 * @str: string to duplicate
 * Return: 0
*/

char *_strdup(char *str)
{
	int a = 0, b = 0;
	char *ptr;


	if (str == NULL)
		return (NULL);

	while (str[b])
		b++;

	ptr = (char *) malloc((b + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while ((ptr[a] = str[a]) != '\0')
		a++;

	return (ptr);
}


