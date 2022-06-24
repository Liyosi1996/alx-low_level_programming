#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of two positive numbres
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	int n, m, result = 0;

	for (n = 1; n < argc; n += 1)
	{
		for (m = 0; (argv[n][m] != '\0'; m +=1))
		{
			if (((argv[n])[m] - '0' >= 0 && ((argv[n][m] - '0') <= 9)
