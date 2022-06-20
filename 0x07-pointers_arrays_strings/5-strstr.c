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
	int i = 0, j = 0;

	while ((haystack[j] != '\0') || (needle[i] != '\0'))
	{
		if (needle[i] != haystack[j])
		{
			j++;
			i = 0;
		}
		else
		{
			i++;
			j++;
		}
	}
	if (needle[i] == '\0')
		return (1);
	else
		return (NULL);
}
