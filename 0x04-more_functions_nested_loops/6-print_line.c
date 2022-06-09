#include <stdio.h>
#include "main.h"

/**
 * print_line - Straight line to the terminal
 * @m: character in use
 * Return: 0
*/

void print_line(int m)
{
	if (m <= 0)
	{
		_putchar('\n');
	} else
	{
		int j;


		for (j = 0; j <= m; j++)
		{
			_putchar('_')
		}
		_putchar('\n');
	}
}
