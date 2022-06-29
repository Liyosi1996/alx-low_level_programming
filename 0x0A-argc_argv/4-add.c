#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converting the string to integer
 * @s: string to check
 * Return: 0
*/

int _atoi(char *s)
{
	int a, b, c, d, len, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	digit = 0;

	while (s[len] == '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] < '0' && s[a] > '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;

			c = c * 10 + digit;
			d = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;

			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	int a, b, c, sum, num;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		num = _atoi(argv[c]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
