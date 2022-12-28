#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a node at the given index
 *
 * @h: a double poniter the start node
 * @idx: the given index position of the node
 * @n: the data field for the given index
 *
 * Return: the pointer to the newly added node at the index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr, *prev;
	unsigned int count;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = new_node->next = NULL;
	if (!(*h) && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	else if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else
	{
		while (curr)
		{
			prev = curr;
			curr = curr->next;
			count++;
			if (idx == count)
			{
				new_node->next = curr;
				curr->prev = new_node;
				new_node->prev = prev;
				prev->next = new_node;
				return (new_node);
			}
		}
	}
	return (NULL);
}
