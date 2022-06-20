#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set bytes
 * @s: string to search
 * @accept: byte
 * Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for  (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL)
}
