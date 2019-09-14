#include "lists.h"

/**
 * sum_dlistint - sum of all data (n) of a linked list
 * @head: list to sum
 * Return: 0 if is empity or the sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux;

	if (!head)
		return (0);
	aux = head;
	while (aux)
	{
		if (aux->prev == NULL)
			break;
		aux = aux->prev;
	}
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
