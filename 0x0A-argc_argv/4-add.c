#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * num_checker - verifies if string has numbers
 * @s: string to check
 * Return: 0
*/

int num_checker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - adds tve numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (num_checker(argv[i] == 0))
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


