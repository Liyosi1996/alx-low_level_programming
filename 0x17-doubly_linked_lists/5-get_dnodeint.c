#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node
 * @head: pointer to thr beginning of the list
 * @index: index of the node
 * Return: pointer to the indexed node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	for (j = 0; j < index; j++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
