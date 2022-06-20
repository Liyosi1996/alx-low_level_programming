#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: subtring
 * @haystack: string
 * Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	int j;

	int i = 0;

	while (needle[i] != '\0')
		i++;

	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (j != i)
			haystacck++;
		else
			return (haystack);
	}
	return (NULL);
}
