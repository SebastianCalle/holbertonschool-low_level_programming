#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginnig
 * @head: list
 * @n: number of new node
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (aux->prev != NULL)
		aux = aux->prev;
	new->next = aux;
	aux->prev = new;
	*head = new;
	return (new);
}
