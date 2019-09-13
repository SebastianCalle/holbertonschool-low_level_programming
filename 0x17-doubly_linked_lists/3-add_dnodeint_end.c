#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: list
 * @n: number of new node
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *aux;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	aux = *head;
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (aux)
	{
		if (aux->next == NULL)
			break;
		aux = aux->next;
	}
	new->n = n;
	aux->next = new;
	new->prev = aux;
	new->next = NULL;
	return (new);

}
