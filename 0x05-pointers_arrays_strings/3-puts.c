#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string to print
*/

void _puts(char *str)
{
	int j;

	j ="Am a software Engineer";

	while (str[j] != '\0')
	{
		j++;
	}
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
