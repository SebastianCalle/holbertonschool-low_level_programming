#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: struct hash_table_t
 * @key: key for node
 * @value: value for node
 * Return: 1 if it succeeded or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot;
	hash_node_t *new, *aux_n;

	if (strcmp(key, "") == 0 || key == NULL || value == NULL || ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	slot = key_index((const unsigned char *)key, ht->size);
	if (ht->array[slot] == NULL)
	{
		ht->array[slot] = new;
		new->key = strdup(key), new->value = strdup(value);
		if (new->key == NULL || new->value == NULL)
			return (0);
		new->next = NULL;
	}
	else
	{
		aux_n = ht->array[slot];
		while (aux_n)
		{
			if (strcmp(aux_n->key, key) == 0)
			{
				free(aux_n->value);
				free(new);
				aux_n->value = strdup(value);
				if (aux_n->value == NULL)
					return (0);
				return (1);
			}
			aux_n = aux_n->next;
		}
		aux_n = ht->array[slot];
		new->key = strdup(key), new->value = strdup(value);
		if (new->key == NULL || new->value == NULL)
			return (0);
		new->next = aux_n, ht->array[slot] = new;
	}
	return (1);
}
