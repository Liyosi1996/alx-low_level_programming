#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non digit char
 * @s: string
 * Return: 0
*/

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns length of a string
 * @s: string to evaluate
 * Return: 0
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - hamndles errors for main
*/

void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies tve numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	char *p1, *p2;
	int len1, len2, len, i, tmp, digit1, digit2, *result, a = 0;

	p1 = argv[1], p2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(p1);
	len2 = _strlen(p2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 - 1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit = p1[len1] - '0';
		tmp = 0;
		for (len2 = _strlen(p2) - 1; len2 >= 0; len2--)
		{
			digit2 = p2[len2] - '0';
			tmp += result[len1 + len2 + 1] + (digit1 + digit2);
			result[len1 + len2 + 1] = tmp % 10;
			tmp /= 10;
		}
		if (tmp > 0)
			result[len1 + len2 + 1] += tmp;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
