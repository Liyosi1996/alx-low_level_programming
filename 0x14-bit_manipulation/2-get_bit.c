#include "main.h"

/**
 * get_bit - returns value of a bit
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 65)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
