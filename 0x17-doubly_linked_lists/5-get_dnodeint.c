#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the node of a list for index
 * @head: list to search
 * @index: number of index
 * Return: the node of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux;

	if (!head)
		return (NULL);
	aux = head;
	while (aux)
	{
		if (aux->prev == NULL)
			break;
		aux = aux->prev;
	}
	for (i = 0; index >= i; i++)
	{
		if (i == index)
			break;
		aux = aux->next;
		if (aux == NULL && index > i)
			return (NULL);
	}
	return (aux);
}
