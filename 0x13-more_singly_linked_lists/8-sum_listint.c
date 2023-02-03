#include "lists.h"

/**
 * sum_listint - Sum all the content of all the nodes
 * @head: the head pointer to the node
 * Return: retunrn the sum of all the contents
 */

int sum_listint(listint_t *head)
{
	const listint_t *tmp;
	int sum;

	sum = 0;
	for (tmp = head; tmp != NULL; tmp = tmp->next)
	{
		sum += tmp->n;
	}
	return (sum);
}
