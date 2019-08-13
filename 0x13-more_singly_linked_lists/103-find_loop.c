#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to list
 * Return: the addres of the node;
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *aux, *aux2 = NULL;
	size_t i = 0, j;

	if (head == NULL)
		return (NULL);
	aux = head;
	while (aux)
	{
		aux2 = head;
		aux = aux->next;
		i++;
		if (aux == NULL)
			return (NULL);
		for (j = 0; j < i; j++)
		{
			if (aux2 == aux)
				return (aux2);
			aux2 = aux2->next;
		}
	}
	return (0);
}
