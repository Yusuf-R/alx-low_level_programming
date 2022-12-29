#include "lists.h"

/**
 * del_head - delete the node if head->next is valid
 *
 * @head: double pointer to the start node
 *
 * Return: Nothing
 */
void del_head(dlistint_t **head)
{
	dlistint_t *curr;

	curr = *head;
	*head = (*head)->next;
	free(curr);
	curr = NULL;
	(*head)->prev = NULL;
}

/**
 * delete_dnodeint_at_index - delete the node at the index position
 *
 * @head: double pointer to the start node
 * @index: index position of the node
 *
 * Return: 1 for sucess or -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *prev;
	unsigned int count;

	if (!head || !(*head))
		return (-1);

	count = 0, curr = *head;
	if (index == 0 && !(*head)->next)
	{
		free(*head), *head = NULL;
		return (1);
	}
	if (index == 0 && (*head)->next)
	{
		del_head(head);
		return (1);
	}
	while (curr)
	{
		prev = curr, curr = curr->next,	count++;
		if (index == count && curr != NULL)
		{
			if (curr->next != NULL)
			{
				prev->next = curr->next;
				curr->next->prev = prev;
				free(curr), curr = NULL;
				return (1);
			}
			else if (curr->next == NULL)
			{
				prev->next = NULL;
				free(curr), curr = NULL;
				return (1);
			}
		}
		if (index == count && curr == NULL)
			return (-1);
	}
	return (-1);
}
