#include <stdlib.h>
#include "lists.h"

/**
 * list_len - func that returns number of elememts in alinked list
 * @h: pointer to list_t list
 * Return: elements in h
*/

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
