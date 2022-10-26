#include "lists.h"

/**
 * free_listint_safe - prints the lits of elements in the list
 *
 * @h: the pointer
 *
 * Return: retunrn the printed value
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	if (h && *h)
	{
		count++;
		if (*h > (*h)->next)
			count += free_listint_safe(&(*h)->next);
		free(*h);
	}
	*h = NULL;
	return (count);
}
