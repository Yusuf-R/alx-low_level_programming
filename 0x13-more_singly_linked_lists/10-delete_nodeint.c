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
	listint_t *trv, *aux;
	size_t cnt;
	int ss, ff;

	cnt = 0;
	ss = 1;
	ff = -1;
	trv = *head;

	if (!*head || !head)
		return (ff);
	if (index == 0)
	{
		*head = (*head)->next;
		free(trv);
		return (ss);
	}
	for (cnt = 0, trv = *head; trv != NULL; trv = trv->next, cnt++)
	{
		if (cnt == index - 1)
		{
			aux = trv->next;
			trv->next = aux->next;
			free(aux);
			return (ss);
		}
	}
	return (ff);
}
