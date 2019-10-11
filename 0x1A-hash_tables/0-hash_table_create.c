#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of array
 * Return: a pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
