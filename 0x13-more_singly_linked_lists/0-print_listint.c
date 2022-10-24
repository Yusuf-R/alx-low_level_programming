#include "lists.h"

/**
 * listint_len - Print all the list of a link while counting the node
 * @h: the list with a type list_t
 * Return: retunrn the total nodee
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t count;

	count = 0;
	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		count++;
		printf("%d", tmp->n);
	}
	return (count);
}
