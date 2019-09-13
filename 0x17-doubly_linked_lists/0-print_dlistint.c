#include "lists.h"
/**
 * print_dlistint - print int elements of a list
 * @h: list to print
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux, *aux2;
	size_t n = 0;

	if (h == NULL)
		return (0);
	aux = h->prev;
	if (aux == NULL)
	{
		aux2 = h;
		while (aux2)
		{
			printf("%d\n", aux2->n);
			aux2 = aux2->next;
			n++;
		}
	}
	else
	{
		while (aux)
		{
			aux = aux->prev;
		}
		aux2 = aux;
		while (aux2)
		{
			printf("%d\n", aux2->n);
			aux2 = aux2->next;
			n++;
		}
	}
	return (n);
}
