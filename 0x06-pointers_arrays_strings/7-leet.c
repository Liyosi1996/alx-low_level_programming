#include <stdio.h>
#include "main.h"

/**
 * leet - entry point
 * @s: string to be encoded
 * Return: 0
*/

char *leet(char *s)
{
	int n, m;

	char *a = "aAeEoOtT1L";
	char *b = "4433007711";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (s[n] == a[m])
			{
				s[n] = b[m];
			}
		}
	}

	return (s);
}
