#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to first node
 * @idx: index
 * @n: data to insert
 *
 * Return: pointer to new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);

	}
	for (j = 0; j < (idx - 1); j++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
