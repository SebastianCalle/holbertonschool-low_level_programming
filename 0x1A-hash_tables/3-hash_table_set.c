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
		new->value = malloc(strlen(value) + 1);
		if (!new->value)
			return (0);
		strcpy(new->value, value);
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
	unsigned long int slot = hash_djb2((unsigned char *)key) % ht->size;
	hash_table_t *aux = NULL;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (ht == NULL)
		return (0);
	aux = ht;
	if (aux->array[slot] == NULL)
	{
		aux->array[slot] = new;
		new->key = malloc(strlen(key) + 1);
		new->value = malloc(strlen(value) + 1);
		if ((!new->key) || (!new->value))
			return (0);
		new->next = NULL;
		strcpy(new->key, key);
		strcpy(new->value, value);
	}
	else
	{
		new = aux->array[slot];
		while (new->next)
		{
			if (!check_key(new, key, value))
				return (0);
			new = new->next;
		}
		if (!check_key(new, key, value))
			return (0);
		new->key = malloc(strlen(key) + 1);
		new->value = malloc(strlen(value) + 1);
		if ((!new->key) || (!new->value))
			return (0);
		new->next = NULL;
		strcpy(new->key, key);
		strcpy(new->value, value);
	}
	return (1);
}
