#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: double pointer to list_t
 * @str: new string to add in the node
 * Return: address of new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int length = 0;

	while (str[length])
		length++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->length = length;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
