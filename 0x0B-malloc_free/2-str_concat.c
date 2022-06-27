#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: output string
 * @s2: input string
 * Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	while (s1 && s1[c])
		c++;

	while (s2 && s2[d])
		d++;

	ptr = malloc(sizeof(char) * (c + d + 1));

	if (ptr == NULL)
		return (NULL);
	a = 0;
	b = 0;

	if (s1)
	{
		while (a < c)
		{
			ptr[a] = s1[a];
			a++;
		}
	}
	if (s2)
	{
		while (a < (c + d))
		{
			ptr[a] = s2[b];
			a++;
			b++;
		}
	}
	ptr[a] = '\0';
	return (ptr);
}
