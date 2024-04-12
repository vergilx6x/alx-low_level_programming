#include "hash_tables.h"

/**
 * key_index - Get the index using djb2
 * where to store key/value.
 * @key: The key to get the index of.
 * @size: The size of the array in the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
