#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - a function that creates a hash table.
 * @size:  is the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	if (size == 0)
		return (NULL);

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(size, sizeof(hash_node_t *));
	if (!h_table->array)
	{
		free(h_table);
		h_table = NULL;
		return (NULL);
	}
	return (h_table);
}
