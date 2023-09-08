#include "hash_tables.h"

/**
 * key_index - Get the index of a key/value
 * @key: key to get the index of.
 * @size: The size of the array
 * Return: index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
