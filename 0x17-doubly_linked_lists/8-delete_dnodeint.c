#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: list to search node
 * @index: index to delete
 * Return: 1 if succes or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux, *del;

	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0, aux = *head; aux; i++, aux = aux->next)
		;
	if (i == 1)
	{
		aux = *head;
		*head = NULL;
		free(aux);
		return (1); }
	if (index == 0)
	{
		aux = *head;
		*head = aux->next;
		(*head)->prev = NULL;
		free(aux);
		return (1); }
	for (i = 0, del = *head; del; i++)
	{
		if (i == index)
			break;
		del = del->next;
		if (del == NULL)
			return (-1); }
	if (i == index)
	{
		if (del->next != NULL)
		{
			aux = del->prev;
			aux->next = del->next;
			aux->next->prev = aux;
			free(del);
			return (1); }
		aux = del->prev;
		aux->next = NULL;
		free(del); }
	return (1);
}
