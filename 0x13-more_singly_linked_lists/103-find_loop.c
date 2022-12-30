#include "lists.h"

/**
 * find_listint_loop - find the  loop in the link list
 *
 * @head: the pointer to the start of the list
 *
 * Return: the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *rabbit;

	snail = rabbit = head;
	if (!head)
		return (NULL);
	while (snail && rabbit && rabbit->next)
	{
		rabbit = rabbit->next->next;
		snail = snail->next;
		if (snail == rabbit)
			break;
	}
	if (rabbit != snail || !rabbit || !snail || !rabbit->next)
		return (NULL);
	snail = head;
	while (snail != rabbit)
	{
		snail = snail->next;
		rabbit = rabbit->next;
	}
	return (rabbit);
}
