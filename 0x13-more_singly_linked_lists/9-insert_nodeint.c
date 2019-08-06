#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of structure
 * @idx: index of to add
 * @n: element to new node
 * Return: new node o null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *aux;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || *head == NULL)
		return (NULL);
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
		if (idx == 0)
		{
			new->n = n;
			new->next = aux;
			*head = new;
			return (new);
		}
		for (i = 1; i < idx; i++)
			aux = aux->next;
		new->n = n;
		new->next = aux->next;
		aux->next = new;
	}
	else
		return (NULL);

	return (new);
}

