#include "lists.h"

/**
 * find_listint_loop - find the culprit that causes the loop
 *
 * @head: the pointer
 *
 * Return: return the address of the loop causing node
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head)
	{
		if (head > head->next)
			head = find_listint_loop(head->next);
		else
			return (head->next);
		return (head);
	}
	return (NULL);
}
