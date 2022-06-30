#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates  two strings
 * @s1: string to add
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to s1
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int p, m, k, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (p = 0; s1[p] != '\0'; p++)

		for (m = 0; s2[m] != '\0'; m++)
			if (n > m)
				n = m;
	k = p + n;
	ptr = malloc(k + 1);

	if (ptr == NULL)
		return (NULL);
	for (len = 0; len < k; len++)
		if (len < p)
			ptr[len] = s1[len];
		else
			ptr[len] = s2[len - p]
				ptr[i] = '\0';
	return (ptr);
}
