#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (a == 0)
	{
		a = *s1 - *s2;

		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}

	return (a);
}
