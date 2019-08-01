#include "lists.h"
/**
 * add_node_end - adds new node at the end of a list_t lsit
 * @head: structure head
 * @str: string to add
 * Return: new structure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new = malloc(sizeof(list_t));
	list_t *aux = *head;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->str = strdup(str);
		new->len = i;
		*head = new;
		new->next = NULL;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		new->str = strdup(str);
		new->len = i;
		new->next = NULL;
		aux->next = new;
	}
	return (new);
}
