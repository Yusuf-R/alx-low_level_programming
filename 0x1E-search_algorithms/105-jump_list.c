#include "search_algos.h"

/**
 * jump_list - jump searches on singly linked list
 * @list: pointer to head node
 * @size: its size
 * @value: value to search for
 *
 * Return: the node found or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx = 0, jdx = sqrt(size), kdx = 0, lx = 0;
	listint_t *last = list;

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		for (lx = idx, last = list, kdx = 0; list->next && kdx < jdx; kdx++)
		{
			list = list->next;
			idx++;
		}
		printf("Value checked at index [%lu] = [%d]\n", idx, list->n);
		if (!list->next)
			break;
	}

	if (!list->next)
		jdx = lx;
	else
		jdx = idx >= jdx ? idx - jdx : 0;
	printf("Value found between indexes [%lu] and [%lu]\n", jdx, idx);
	idx = idx >= size ? size - 1 : idx;
	list = last;
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", jdx, list->n);
		if (list->n == value)
			return (list);
		jdx++;
		list = list->next;
	}
	return (NULL);
}
