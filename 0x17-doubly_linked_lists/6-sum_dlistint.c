#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a D-LL
 *
 * @head: the poniter the start node
 * @index: the given index position of the node
 *
 * Return: the pointer to that given node found at the index
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav;
	int sum;

	if (!head)
		return (0);
	trav = head;
	sum = 0;
	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
