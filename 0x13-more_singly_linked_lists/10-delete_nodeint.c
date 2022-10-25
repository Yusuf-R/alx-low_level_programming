#include "lists.h"

/**
 * delete_nodeint_at_index - Add a node at any index
 *
 * @head: the pointer
 * @n: the string
 * @idx: desired index position
 *
 * Return: retunrn the printed value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trv;
	size_t cnt;
	int ss,ff;

	cnt = 0;
	ss = 1;
	ff = -1;

	if (!*head)
		return (ff);

	trv = *head;
	while (trv && cnt <= index)
	{
		if (cnt == index)
		{
			listint_t *aux = trv;
			trv = trv->next;
			free(aux);
			return (ss);
		}
		trv = trv->next;
		cnt++;	
	}

	return (ff);
}
