#include <stdio.h>
#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - returns integer as a prime number
 * @n: number to evaluate
 * Return:0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursive
 * @n: number
 * @j: iterator
 * Return: 0
*/

int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
