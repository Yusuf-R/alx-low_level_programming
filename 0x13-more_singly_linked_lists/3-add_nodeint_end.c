#include "lists.h"

/**
 * add_nodeint_end - Add a node at the end
 * @n: the pointer
 * @head: the head pointer
 * Return: retunrn the printed value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *traverse;

	tmp =  malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	for (traverse = *head; traverse != NULL; traverse = traverse->next)
	{
		if (traverse->next == NULL)
		{
			traverse->next = tmp;
			break;
		}
	}
	return (*head);
}
