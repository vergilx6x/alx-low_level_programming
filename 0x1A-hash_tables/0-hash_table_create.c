#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *ht;

	ht = (hash_table_t*)malloc(sizeof(hash_table_t));
	if (!ht)
	{
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	ht->array = (hash_node_t**)calloc(size, sizeof(hash_node_t));
	if (ht->array == NULL)
	{
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	ht->size = size;

	return (ht);
}



