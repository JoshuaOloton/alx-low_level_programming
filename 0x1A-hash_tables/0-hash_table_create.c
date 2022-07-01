#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **arr;
	unsigned int i;

	arr = malloc(sizeof(hash_node_t *) * size);
	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = NULL;
	}
	new_table->size = size;
	new_table->array = arr;
	return (new_table);
}
