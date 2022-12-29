#include "lists.h"
#include <stdlib.h>

/**
 * insert_beg - insert at the beginnig if *head is NULL
 *
 * @head: double pointer to the head
 * @data: data value
 *
 * Return: the address of the new_node
 *
 */
dlistint_t *insert_beg(dlistint_t **head, int data)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = data;
	n_node->prev = NULL;
	n_node->next = NULL;
	*head = n_node;
	return (n_node);
}

/**
 * insert_beg_others - insert at the beginnig if *head is not NULL
 *
 * @head: double pointer to the head
 * @data: data value
 *
 * Return: the address of the new_node
 */

dlistint_t *insert_beg_others(dlistint_t **head, int data)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = data;
	n_node->prev = NULL;
	n_node->next = *head;
	(*head)->prev = n_node;
	*head = n_node;
	return (n_node);
}

/**
 * insert_dnodeint_at_index - insert a node at the given index
 *
 * @h: a double poniter the start node
 * @idx: the given index position of the node
 * @n: the data field for the given index
 *
 * Return: the pointer to the newly added node at the index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr, *prev, *node_address;
	unsigned int count;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = new_node->next = NULL;
	if (!(*h) && idx == 0)
		return (node_address = insert_beg(h, n));
	if (*h && idx == 0)
		return (node_address = insert_beg_others(h, n));
	curr = *h, count = 0, prev = NULL;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		count++;
		if (idx == count && curr)
		{
			new_node->next = curr;
			curr->prev = new_node;
			new_node->prev = prev;
			prev->next = new_node;
			return (new_node);
		}
		else if (idx == count && !curr)
		{
			new_node->prev = prev;
			prev->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
