#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_T
 * @head: struct head
 * @str: string to add
 * Return: addres od pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);

}
