#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key for hash
 * @size: size of array
 * Return: the index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
