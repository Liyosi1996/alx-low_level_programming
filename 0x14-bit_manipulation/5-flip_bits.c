#include "main.h"

/**
 * flip_bits - number of bits t change
 * @n: first decimal
 * @m: second decimal
 *
 * Return: number of bits
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, num = 0;
	unsigned long int count;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		count = exclusive >> j;
		if (count & 1)
			num++;
	}

	return (num);
}
