#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: first node in the list
 * @index: index of the node
 * Return: pointer to the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *list = head;

	while (list && j < index)
	{
		list = list->next;
		j++;
	}

	return (list ? list : NULL);
}
