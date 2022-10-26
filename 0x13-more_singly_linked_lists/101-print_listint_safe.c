#include "lists.h"

/**
 * print_listint_safe - prints the lits of elements in the list
 *
 * @head: the pointer
 *
 * Return: retunrn the printed value
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head > head->next)
			count += print_listint_safe(head->next);
		else
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	}
	return (count);
}
