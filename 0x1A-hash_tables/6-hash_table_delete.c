#include "hash_tables.h"

/**
 * hash_table_delete - function htat deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;
	hash_node_t *aux2;

	for(i = 0; i < ht->size; i++)
	{
		if(ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while(aux->next)
			{
				aux2 = aux->next;
				if (aux != NULL)
				{
					free(aux->value);
					free(aux->key);
					free(aux);
				}
				aux = aux2;
			}
			if (aux != NULL)
			{
				free(aux->value);
				free(aux->key);
				free(aux);
			}
		}
	}
	if (ht != NULL)
	{
		free(ht->array);
		free(ht);
	}
}
