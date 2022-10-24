#include "lists.h"

/**
 * free_listint2 - Free all the list with return NULL
 * @head: the head pointer
 * Return: retunrn the printed value
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head !=  NULL)
	{
		tmp = *head;
		while (tmp != NULL)
		{
			listint_t *aux = tmp;

			tmp = tmp->next;

			free(aux);
		}
		*head = NULL;
	}
	
}
