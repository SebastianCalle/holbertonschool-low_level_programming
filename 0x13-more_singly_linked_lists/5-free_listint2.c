#include "lists.h"
/**
 * free_listint2 - free a listint_t
 * @head: pointer to pointer to structure
 */
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	if (head)
	{
		while (aux)
		{
			*head = aux->next;
			free(aux);
			aux = *head;
		}

	}
	return;
}
