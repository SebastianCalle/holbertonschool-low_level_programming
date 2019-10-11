#include "hash_tables.h"

/**
 * check_key - function that compare keys
 * @new: struct of node
 * @key: key to compare
 * @value: value to add
 * Return: 1 if succes or 0 if not
 */
int check_key(hash_node_t *new, const char *key, const char *value)
{
	if (strcmp(new->key, key) == 0)
	{
		free(new->value);
		new->value = strdup(value);
	}
	return (1);
}

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
	hash_node_t *new = NULL;
	hash_node_t *aux_n = NULL;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	slot = key_index((const char unsigned *)key, ht->size);
	if (ht->array[slot] == NULL)
	{
		ht->array[slot] = new;
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
	}
	else
	{
		aux_n = ht->array[slot];
		while (aux_n)
		{
			if (check_key(aux_n, key, value))
				return (1);
			aux_n = aux_n->next;
		}
		aux_n = ht->array[slot];
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = aux_n;
	}
	return (1);
}
