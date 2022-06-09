#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers,
 * Return: 0-9 excluding 2 and 4
*/

void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != 2 && j != 4)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
