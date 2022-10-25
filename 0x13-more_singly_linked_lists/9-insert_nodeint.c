#include "lists.h"

/**
 * insert_nodeint_at_index - Add a node at any index
 *
 * @head: the pointer
 * @n: the string
 * @idx: desired index position
 *
 * Return: retunrn the printed value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *trv;
	size_t count;

	count = 0;

	tmp =  malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		tmp->n = n;
		tmp->next = NULL;
		*head = tmp;
		return (*head);
	}
	for (count = 1, trv = *head; trv != NULL; trv = trv->next, count++)
	{
		if (count == idx)
		{
			tmp->n = n;
			tmp->next = trv->next;
			trv->next = tmp;
			return (tmp);
		}
	}
	if (idx > count)
		return (NULL);

	return (NULL);
}