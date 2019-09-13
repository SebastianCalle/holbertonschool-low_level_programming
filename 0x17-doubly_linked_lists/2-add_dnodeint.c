#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginnig
 * @head: list
 * @n: number of new node
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (aux)
	{
		if (aux->prev != NULL)
		{
			aux = aux->prev;
			continue;
		}
		new->n = n;
		new->prev = NULL;
		new->next = aux;
		break;
	}
	*head = new;
	return (*head);

}
