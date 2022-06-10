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
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
