#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of structure
 * @idx: index of to add
 * @n: element to new node
 * Return: new node o null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{	unsigned int i = 0;
	listint_t *aux;
	listint_t *new;

	if (head == NULL && *head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		aux = *head;
		new->n = n;
		new->next = aux;
		*head = new;
		return (new);

	}
	aux = *head;
	while (aux->next)
	{
		aux = aux->next;
		i++;
	}
	i++;
	if (idx <= i)
	{
		aux = *head;
		for (i = 1; i < idx; i++)
			aux = aux->next;
		new->n = n;
		new->next = aux->next;
		aux->next = new;
		return (new);
	}
	else
		return (NULL);

}

