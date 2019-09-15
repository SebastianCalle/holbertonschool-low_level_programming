#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
