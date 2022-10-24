#include "lists.h"

/**
 * pop_listint - Pop the head node off
 * @head: the head pointer
 * Return: retunrn the int value
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	ret = 0;

	if (*head == NULL)
		return (ret);

	tmp = *head;

	if (tmp)
	{
		listint_t *aux = tmp;

		ret = tmp->n;

		tmp = tmp->next;

		free(aux);
	}
	*head = tmp;
	return (ret);
}
