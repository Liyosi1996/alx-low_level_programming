#include <stdio.h>
#include "main.h"

/**
 * set_string - sets value of a pointer to a string
 * @s: pointer to pointer to set to
 * @to: string to set
 *
*/

void set_string(char **s, char *to)
{
	*s = to;
}

