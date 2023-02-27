#include "hash_tables.h"
/**
 * hash_table_delete - delstes the hash table created
 *
 * @ht: the pointer to the hastable
 *
 * Return: all memory freed back to the O.S
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *trav, *temp;

	i = 0;
	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		ht = NULL;
	}
	while (i < ht->size)
	{
		trav = ht->array[i];
		while (trav)
		{
			free(trav->key);
			trav->key = NULL;

			free(trav->value);
			trav->value = NULL;

			temp = trav->next;
			free(trav);
			trav = temp;
		}
		free(ht->array[i]);
		ht->array[i] = NULL;
		i++;
	}
	free(trav);
	trav  = NULL;
	free(ht);
	ht = NULL;
	free(temp);
	temp = NULL;
}
