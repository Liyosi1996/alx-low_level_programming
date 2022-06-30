#include "main.h"
#include <stdio.h>
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
	unsigned int ls1 = 0, ls2 = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr)
		return (NULL);

	while (ls1 < len1)
	{
		s[ls1] = s1[ls1];
			ls1++;
	}
	while (n < len2 && ls1 < (len1 + n))
		ptr[ls1++] = s2[ls2++];

	while (n >= len2 && ls1 < (len1 + len2))
		ptr[ls1++] = s2[ls2++];

	s[ls1] = '\0';
	return (ptr);
}
