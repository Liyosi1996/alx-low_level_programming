#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 always
*/
int get_endianness(void)
{
	unsigned int j = 1;
	char *C = (char  *) &j;

	return (*C);
}
