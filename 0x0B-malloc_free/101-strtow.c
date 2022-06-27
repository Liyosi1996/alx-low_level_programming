#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words
 * @s: string to be evaluated
 *
 * Return: 0
*/

int count_word(char *s)
{
	int i, j, flag;

	flag = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}
	return (j);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: 0
*/

char **strtow(char *str)
{
	char **matrix, *tmp;
	int n, m, leng, words, l, start, end;

	m = 0;
	leng = 0;
	l = 0;

	while (*(str + leng))
		leng++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (n = 0; n <= leng; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (l)
			{
				end = n;
				tmp = (char *) malloc(sizeof(char) * (l + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - l;
				l++;
				l = 0;
			}
		}
		else if (l++ == 0)
			start = n;
	}
	matrix[l] = NULL;
	return (matrix);
}
