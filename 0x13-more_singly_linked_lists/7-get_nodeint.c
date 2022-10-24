#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the
 * nth node of a listint_t linked list.
 *
 * @head: the head pointer
 * @index:
 *
 * Return: retunrn the int value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	size_t count;

	count = 0;

	for (count = 0, tmp = head; tmp != NULL; tmp = tmp->next, count++)
	{
		if (count == index)
			return (tmp);
	}
	return (NULL);
}
