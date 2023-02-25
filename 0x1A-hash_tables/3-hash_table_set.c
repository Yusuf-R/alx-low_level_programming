#include "hash_tables.h"
#include <string.h>

/**
 * node_element - this create a noded and stores the key and value
 *
 * @key: the key
 * @value: the value
 *
 * Return: a pointer to the newly created element node
 */


hash_node_t *node_element(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (!key)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = malloc(strlen(value) + 1);
	if (!new_node->value)
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}


/**
 * hash_table_set - a function that adds an element23 to the has table
 *
 * @ht: head pointer to the element pointer
 * @key: the key as string or empty
 * @value: the value associated with the key
 *
 * Return: 1 if succedded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node_item;
	unsigned long int k_idx;
	hash_node_t *trav;

	if (!ht || !ht->array || !key || !value)
		return (0);

	k_idx = key_index((const unsigned char *)key, ht->size);
	new_node_item = node_element(key, value);

	if (!new_node_item)
		return (0);
	trav = ht->array[k_idx];
	if (trav == NULL)
	{
		ht->array[k_idx] = new_node_item;
		return (1);
	}
	while (trav)
	{
		if (strcmp(trav->key, key) == 0)
		{
			free(new_node_item->value);
			free(new_node_item->key);
			free(new_node_item);
			return (0);
		}
		trav = trav->next;
	}
	new_node_item->next = ht->array[k_idx];
	ht->array[k_idx] = new_node_item;
	return (1);
}
