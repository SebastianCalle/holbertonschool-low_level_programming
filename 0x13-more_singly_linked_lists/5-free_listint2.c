#include "lists.h"
/**
 * free_listint2 - free a listint_t
 * @head: pointer to pointer to structure
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	aux = *head;
	while (*head)
	{
		aux = aux->next;
		free(*head);
		*head = aux;
	}
	head = NULL;

}
