#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: Null if an error occured
 *         or a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (0);
	}

	ht->array = (hash_node_t **)calloc(size, sizeof(hash_node_t));
	if (ht->array == NULL)
	{
		return (0);
	}

	ht->size = size;

	return (ht);
}



