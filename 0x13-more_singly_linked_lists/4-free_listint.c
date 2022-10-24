#include "lists.h"

/**
 * free_listint - Free all the list with return NULL
 * @head: the head pointer
 * Return: retunrn the printed value
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free_listint(head->next);
		free(head);
	}

}
