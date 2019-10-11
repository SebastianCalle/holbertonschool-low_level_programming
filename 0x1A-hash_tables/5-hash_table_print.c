#include "hash_tables.h"

/**
 * hash_table_print - function that porints a has table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, f = 0;
	hash_node_t *aux;

	if (ht == NULL)
		return ;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux)
			{
				if (f == 1)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				f = 1;
				aux = aux->next;
			}
		}
		i++;
	}
	printf("}\n");

}
