#include "hash_tables.h"

/**
 * hash_table_get -  value associated with the element, or NULL if key couldn’t be found
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * Return: value associated with the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index, size;

	size = ht->size;
	index = hash_djb2(key) % size;
	if (arr[index])
	arr = ht->array;
	return (arr[index]->value);
}
