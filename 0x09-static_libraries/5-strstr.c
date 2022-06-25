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
	int n, m;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[n + m] != needle[m])
				break;
		}
		if (!needle[m])
			return (&haystack[n]);
	}
	return (NULL);
}
