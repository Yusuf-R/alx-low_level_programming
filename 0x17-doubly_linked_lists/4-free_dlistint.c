#include "lists.h"

/**
 * free_dlistint - free the D-LL
 *
 * @head: the pointer to the start of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *trav;

	trav = NULL;
	if (!head)
		return;
	trav = head;
	while (trav)
	{
		if (!trav->next)
		{
			free(head);
			return;
		}
		trav = trav->next;
		free(head);
		head = trav;
	}
}
