#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to pointer of structure
 * @n: element to add
 * Return: a new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		new->n = n;
		new->next = NULL;
		aux->next = new;
	}
	return (new);
}
