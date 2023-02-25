#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 *
 * @key: the key passed
 * @size: the size of the araray of the hash table
 *
 * Return: the index for the given key
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = 0;
	if (!key || !size)
		return (0);

	index = hash_djb2(key) % size;
	return (index);
}
