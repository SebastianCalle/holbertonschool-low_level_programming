#include "hash_tables.h"

/**
 * hash_table_t - Function that creates a hash table
 * @size: size of array
 * Return: a pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
