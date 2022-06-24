#include <stdio.h>
#include "main.h"

/**
 * _str_to_int - converts string to integer
 * @s: string to be converted
 * Return: 0
*/

int _str_to_int(char *s)
{
	int i, j, n, len, f, digit;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	else
		return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _str_to_int(argv[1]);
	num2 = _str_to_int(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

