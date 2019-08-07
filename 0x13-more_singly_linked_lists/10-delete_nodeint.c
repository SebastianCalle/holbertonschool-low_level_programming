#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: pointer to pointer of a structure
 * @index: index to delete
 * Return: 1 if it succesful or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux;
	listint_t *del;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
		return (1);
	}
	del = *head;
	for (i = 0; i < (index - 1); i++)
	{
		del = del->next;
		if (del == NULL)
			return (-1);
	}
	aux = del->next;
	del->next = aux->next;
	free(aux);
	return (1);

}
