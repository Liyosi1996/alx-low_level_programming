#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees alinked list
 * @head: list to be freed
 * Return: Always 0
*/

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
