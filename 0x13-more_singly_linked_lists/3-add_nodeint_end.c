#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of alist
 * @head: pointer to the first element
 * @n: data to addin the new element
 *
 * Return: pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *end = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (*head  == NULL)
	{
		*head = add;
		return (add);
	}

	while (end->next)
		end = end->next;

	end->next = add;

	return (add);
}
