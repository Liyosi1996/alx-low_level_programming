#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals
 * of a square matrix of integers
 * @size: size of matrix
 * @a: square matrix
*/

void print_diagsums(int *a, int size)
{
	int j;

	unsigned int total, total1;

	total = 0;
	total1 = 0;

	for (j = 0; j < size; j++)
	{
		total += a[(size * j) + j];
		total1 += a[(size * (j + 1)) - (j + 1)];
	}

	printf("%d, %d\n", total, total1);
}
