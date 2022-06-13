#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
*/

void puts_half(char *str)
{
	int len = 0, j, m;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		m = len / 2;

	else
		m = (len + 1) / 2;

	for (j = m; j < len; j++)
		_putchar(str[j]);

	_putchar('\n');
}
