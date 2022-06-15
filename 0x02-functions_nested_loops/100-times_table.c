#include "main.h"

/**
 * print_times_table - prints n time table
 * @m: number of time tables
 * Return: 0
*/

void print_times_table(int m)
{
	int i, j, k;
	
	
	if (m >= 0 && m <= 15)
	{
		for (i = 0; i <= m; i++)
		{
			for (j = 0; j <= m; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k %  10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
