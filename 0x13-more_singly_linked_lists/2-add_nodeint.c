#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a lsitint_t
 * @head: pointer to pointer of structure
 * @n: element to add
 * Return: a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

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
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);

}
