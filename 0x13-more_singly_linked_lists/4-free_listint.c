#include "lists.h"
/**
 * free_listint - free a listint_t
 * @head: element to free;
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
