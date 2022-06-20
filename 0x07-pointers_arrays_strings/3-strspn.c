#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: return bytes from
 * @accept: bytes
 * Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	int k, l;

	c = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] != 32)
		{
			for (l = 0; accept[l] != '\0'; l++)
			{
				if (s[k] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
i}
