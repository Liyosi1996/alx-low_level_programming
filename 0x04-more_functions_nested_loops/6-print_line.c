#include <stdio.h>
#include "main.h"

/**
 * print_line - Straight line to the terminal
 * @n: character in use
 * Return: 0
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j;


		for (j = 1; j <= n; j++)
		{
			_putchar('_')
		}
		_putchar('\n');
	}
}
