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
		aux = aux->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	else if (i == idx)
	{
		aux = add_dnodeint_end(h, n);
		return (aux);
	}
	else
	{
		i = 1;
		aux = *h;
		while (aux)
		{
			if (i == idx)
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;
				aux2 = aux;
				aux = aux->next;
				aux2->next = new;
				new->next = aux;
				new->prev = aux2;
				break;
			}
			aux = aux->next;
			i++;
		}

	}
	return (new);
}
