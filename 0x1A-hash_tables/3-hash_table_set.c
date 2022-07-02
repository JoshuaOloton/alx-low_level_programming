#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 or 0 if succeeded or failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *node;
	unsigned long int index, size;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	size = ht->size;
	index = hash_djb2((const unsigned char *)key) % size;
	item->key = (char *)key;
	item->value = (char *)value;
	if (ht->array[index])
	{
		node = ht->array[index];
		node->next = NULL;
		item->next = node;
	}
	item->next = NULL;
	ht->array[index] = item;
	return (1);
}
