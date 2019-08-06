#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: pointer to pointer of a structure
 * @idx: index to delete
 * Return: 1 if it succesful or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux = *head;

	if (*head == NULL)
		return (-1);
	while (aux->next)
	{
		aux = aux->next;
		i++;
	}
	i++;
	if (index <= i)
	{
		aux = *head;
		for (i = 1; i < index; i++)
			aux = aux->next;
		aux->next = aux->next;
		free (aux);
	}
	else
		return (-1);

	return (1);
}
