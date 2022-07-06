#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of args
 * @argv: array of args
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b, result;
	char p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	p = *argv[2];

	if ((p == '/' || p == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
