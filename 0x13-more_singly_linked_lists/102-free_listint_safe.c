#include "lists.h"
/**
 * free_listint_safe - free a list
 * @h: Node to free
 * Return: the size of the list;
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *aux;

	if (h == NULL && *h == NULL)
		return (0);
	aux = *h;
	while (*h)
	{
		aux = *h;
		*h = (*h)->next;
		i++;
		free(aux);

		if (aux <= *h)
		{
			*h = NULL;
			return (i);
		}
	}
	*h = NULL;
	return (i);
}
