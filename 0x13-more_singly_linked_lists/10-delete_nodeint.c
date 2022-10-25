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
	listint_t *trv;
	size_t cnt;
	int ss, ff;

	cnt = 0;
	ss = 1;
	ff = -1;

	if (!*head)
		return (ff);
	if (*head && index == 0)
	{
		listint_t *aux = *head;
		*head = NULL;
		free(aux);
		return (ss);
	}
	for (cnt = 1, trv = *head; trv != NULL; trv = trv->next, cnt++)
	{
		if (cnt == index)
		{
			if (trv->next == NULL)
			{
				listint_t *aux = trv;

				trv = NULL;
				free(aux);
				return (ss);
			}
			else
			{
				listint_t *aux = trv;

				trv = trv->next;
				free(aux);
				return (ss);
			}
		}
	}
	return (ff);
}
