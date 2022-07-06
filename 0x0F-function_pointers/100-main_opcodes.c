#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - print its own opcodes
 * @argc: number of arguments
 * @argv: array arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[j]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (j < atoi(argv[1]) - 1)
	{
		printf("%02hhx ", ((char *) main)[j]);
		j++;
	}
	printf("%02hhx\n", ((char *) main)[j]);
	return (0);
}
