#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list to add
 * @idx: position to insert node
 * @n: new node
 * Return: new node or null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *aux, *aux2, *new;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		aux = add_dnodeint(h, n);
		return (aux);
	}
	aux = *h;
	while (aux)
	{
		if (aux->prev == NULL)
			break;
		aux = aux->prev;
	}
	while (i <= idx)
	{
		if (i == idx - 1)
			break;
		if (aux == NULL)
		{
			return (NULL);
		}
		aux = aux->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	aux2 = aux;
	aux = aux->next;
	aux2->next = new;
	new->next = aux;
	new->prev = aux2;
	return (new);
}
