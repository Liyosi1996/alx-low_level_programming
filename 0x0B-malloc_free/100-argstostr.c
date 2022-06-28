#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int a, b, c, len;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
		len += 1;
	}

	p = malloc((sizeof(char) * len) + 1);

	if (p == NULL)
		return (NULL);

	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
