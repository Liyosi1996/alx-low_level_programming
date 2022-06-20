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
	int k, c, l, temp;

	c = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		temp = 0;
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[k] == accept[l])
			{
				c++;
				temp = 1;
			}
			if (temp == 0)
			{
				return (c);
			}
		}
	}
	return (0);
}
