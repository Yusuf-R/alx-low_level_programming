#include "hash_tables.h"

/**
 * hash_table_get - get the value from a given key
 *
 * @ht : the hast table
 * @key: the key
 *
 * Return: the value from the given key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_idx;
	hash_node_t *trav;
	char *val;

	k_idx = 0;
	trav =  NULL;
	val = NULL;

	if (!ht || !key)
		return (NULL);
	k_idx = key_index((const unsigned char *)key, ht->size);
	trav = ht->array[k_idx];
	if (!trav)
		return (NULL);
	while (trav)
	{
		if (strcmp(trav->key, key) == 0)
		{
			val = trav->value;
			return (val);
		}
		trav = trav->next;
	}
	return (val);
}
