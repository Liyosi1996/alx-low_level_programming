#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints sum of two positive numbres
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	int num, k, i, j, sum = 0;

	for (i = i; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}


