#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated whit a key
 * @ht: hash table
 * @key: keyt to search
 * Return: the value associated or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *aux;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	slot = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[slot];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
