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
	int a, b;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}


	s = (char *) malloc(((a + b) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		s[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		s[a] = s2[b];
		a++;
	}
	return (s);
}
