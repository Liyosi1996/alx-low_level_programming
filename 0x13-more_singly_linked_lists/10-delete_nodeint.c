#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a list
 * @head: pointer to the first element
 * @index: index of the node
 *
 * Return: 0
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (j < index - 1)
	{
		if (!node || !(node->next))
			return (-1);

		node = node->next;
		j++;
	}
	current = node->next;
	node->next = current->next;
	free(current);

	return (1);
}
