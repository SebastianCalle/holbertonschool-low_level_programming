#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: structure
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
