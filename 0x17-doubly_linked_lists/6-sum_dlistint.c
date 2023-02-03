#include "lists.h"

/**
 * sum_dlistint - sum the data field of the D-LL
 *
 * @head: the poniter the start node
 *
 * Return: the sum of all data in the D-LL
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
