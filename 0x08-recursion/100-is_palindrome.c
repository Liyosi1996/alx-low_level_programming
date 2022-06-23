#include "main.h"

int check(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - string is a palindrome
 * @s: string to reverse
 * Return: 1 if palindrome else 0
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length
 * @s: string to be calculated
 * Return: length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check - checks characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome else 0
*/

int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
