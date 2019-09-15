#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginnig
 * @head: list
 * @n: number of new node
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->n = n;
	(*head)->prev = new;
	new->next = (*head);
	new->prev = NULL;
	*head = new;
	return (*head);
}
