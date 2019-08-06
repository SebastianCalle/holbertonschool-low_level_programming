#include "lists.h"
/**
 * print_listint - print all elements of a listint_t list
 * @h: pointer to listint_t
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
