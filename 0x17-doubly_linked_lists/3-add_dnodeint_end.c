#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a node at the end of the list
 *
 * @head: the pointer to the start of the list
 * @n: the data field
 *
 * Return: the pointer the newly added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *trav;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	trav = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (trav)
	{
		if (trav->next == NULL)
		{
			new_node->prev = trav;
			trav->next = new_node;
			break;
		}
		trav = trav->next;
	}
	return (new_node);
}
