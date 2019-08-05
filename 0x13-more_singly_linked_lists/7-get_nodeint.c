#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a lsitint_t
 * @head: pointer to pointer structure
 * @index: index of node
 * Return: the index structure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *aux = head;

	if (head == NULL)
		return (NULL);
	while (c < index)
	{
		aux = aux->next;
		c++;
	}
	return (aux);
}
