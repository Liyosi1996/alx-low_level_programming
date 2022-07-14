#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - appends new node at the end of linked list
 * @head: double pointer
 * @str: string to add new node
 *
 * Return: address of new element
 *
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *node;
	int len;
	list_t *new, *last;

	node = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	node = strdup(str);
	if (!str)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = node;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next !NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
