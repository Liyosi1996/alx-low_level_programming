#include "main.h"

/**
 *_isalpha - Entry poin
 * @c: checks alphabetic character
 * Return: 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
