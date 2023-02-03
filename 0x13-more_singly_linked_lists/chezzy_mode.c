#include "lists.h"

/**
 * delete_nodeint_at_index - Add a node at any index
 *
 * @head: the pointer
 * @index: desired index position
 *
 * Return: retunrn the printed value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	int ret = -1;

	if (head && *head)
	{
		if (index > 0)
		{
			ret = delete_nodeint_at_index(&aux->next, index - 1);
			return (ret);
		}
		else
		{
			aux = aux->next;
			free(*head);
			*head = aux;
			return (1);
		}
	}
	return (ret);
}
