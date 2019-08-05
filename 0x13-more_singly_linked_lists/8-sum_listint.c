#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t
 * @head: pointer to structure
 * Return: the sum of all
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *aux = head;

	if (head == NULL)
		return (0);
	while (aux->next)
	{
		i += aux->n;
		aux = aux->next;
	}
	i += aux->n;
	return (i);
}
