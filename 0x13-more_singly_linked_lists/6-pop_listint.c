#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to pointer of structure
 * Return: the element of head
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *aux = *head;

	if (*head == NULL)
		return (0);
	i = aux->n;
	aux = aux->next;
	free(*head);
	*head = aux;

	return (i);
}
