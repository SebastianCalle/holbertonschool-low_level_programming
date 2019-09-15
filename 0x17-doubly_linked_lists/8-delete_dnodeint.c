#include "lists.h"
/**
 * check_case - delete node for index
 * @head: list to search
 * @index: index to delete
 */
void check_case(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux, *aux2;

	aux = *head;
	for (i = 1; aux; i++, aux = aux->next)
	{
		if (i == index)
		{
			if (aux->next == NULL)
			{
				aux2 = aux->prev;
				aux2->next = NULL;
				free(aux);
				break;
			}
			aux2 = aux->prev;
			aux2->next = aux->next;
			aux->next->prev = aux2;
			free(aux);
			break;
		}
	}
}
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: list to search node
 * @index: index to delete
 * Return: 1 if succes or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux, *aux2;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = *head;
	for ( ; aux; i++, aux = aux->next)
		;
	if (index > i)
		return (-1);
	aux = *head;
	if (i == 1)
	{
		free(aux);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		aux2 = aux->next;
		aux2->prev = NULL;
		*head = aux2;
		free(aux);
		return (1);
	}
	check_case(&(*head), index);
	return (1);
}
