#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a D-LL
 *
 * @head: the poniter the start node
 * @index: the given index position of the node
 *
 * Return: the pointer to that given node found at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav;
	unsigned int idx;

	if (!head)
		return (NULL);
	trav = head;
	idx = 0;
	while (trav)
	{
		if (idx == index)
			break;
		idx++;
		trav = trav->next;
	}
	return (trav);
}
