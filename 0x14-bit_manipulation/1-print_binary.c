#include "main.h"

/**
 * print_binary - prints binary equivalent to dec number
 * @n: number to print
*/

void print_binary(unsigned long int n)
{
	int j, num = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current  = n >> j;

		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
