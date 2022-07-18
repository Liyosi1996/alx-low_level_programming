#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
