#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 * @c: character to be checked
 * Return: returns 1 if uppercase 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');
}
