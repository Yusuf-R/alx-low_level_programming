#include "lists.h"

/**
 * add_nodeint - Add a node to the begining
 * @head: the pointer
 * @n: the string
 * Return: retunrn the printed value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;
	int len = 0;

	tmp =  malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
