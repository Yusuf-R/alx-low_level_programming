#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: the hash table
 *
 * Return: the key/value in the order they appear in hash table
 *
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *trav;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		trav = ht->array[i];
		while (trav)
		{
			if (flag > 0)
				printf(", ");

			printf("'%s': '%s'", trav->key, trav->value);
			flag++;
			trav = trav->next;
		}
	}
	printf("}\n");
}
