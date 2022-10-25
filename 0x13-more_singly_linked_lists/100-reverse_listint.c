#include "lists.h"

/**
 * reverse_listint - functions reverse a list
 *
 * @head: the pointer
 *
 * Return: retunrn the printed value
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt, *prv;

	prv = nxt = NULL;

	if (!head || !*head)
		return (*head);
	while (*head)
	{
		nxt = (*head)->next;
		(*head)->nxt = prv;
		prv = *head;
		*head = nxt;
	}
	*head = next;
	return (*head);
}
