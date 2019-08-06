#include "lists.h"
/**
 * free_listint2 - free a listint_t
 * @head: pointer to pointer to structure
 */
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	while (aux)
	{
		aux = aux->next;
		free(*head);
		*head = aux;
	}
	aux = NULL;
}
