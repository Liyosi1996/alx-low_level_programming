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
	int bytes, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(agrv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}
