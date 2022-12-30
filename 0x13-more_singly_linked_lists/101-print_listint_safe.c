#include "lists.h"
#include <stdio.h>

/**
 * helper_function - to check for the node causing loop
 *
 * @reset: pointer to the head
 * @curr: pointer to the current poistion of our node
 *
 * Return: a pointer to node causing loop
 */

const listint_t *helper_function(const listint_t *reset, const listint_t *curr)
{
	if (curr == NULL)
		return (NULL);
	if (reset != curr)
		curr = helper_function(reset->next, curr->next);
	return (curr);
}

/**
 * print_listint_safe - a function that free a list
 *
 * @head: a pointer to the head
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter;
	const listint_t *fast, *slow, *start_of_loop;

	if (!head)
		exit(98);
	fast = slow = head, counter = 0;

	while (slow)
	{
		counter++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		if (fast && fast->next)
			fast = fast->next->next;
		slow = slow->next;
		if (fast == slow && slow)
		{
			start_of_loop = helper_function(head, slow);
			if (!start_of_loop)
				continue;
			while (slow != start_of_loop)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				counter++;
			}
			printf("-> [%p] %d\n", (void *)start_of_loop, start_of_loop->n);
			return (counter);
		}
	}
	return (counter);
}
