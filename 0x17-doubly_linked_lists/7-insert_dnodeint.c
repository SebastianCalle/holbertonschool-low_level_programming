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
	dlistint_t *new, *aux;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	aux = *h;
	for ( ; aux; i++, aux = aux->next)
		;
	if (idx > i)
		return (NULL);
	if (idx == i)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	aux = *h;
	i = 1;
	while (aux != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = aux->next;
			new->prev = aux;
			aux->next->prev = new;
			aux->next = new;
			break;
		}
		aux = aux->next;
		i++;
	}
	return (new);
}
