#include "main.h"

/**
 * _islower - Entry point
 * @c: contains value to be compared
 * Return: 0
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');
}
