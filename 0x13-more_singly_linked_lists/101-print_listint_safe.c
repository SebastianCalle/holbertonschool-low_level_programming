#include "lists.h"
/**
 * print_listint_safe - print a listint_t
 * @head: a constat listint_t *head
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *aux = NULL, *aux2 = NULL;
	size_t i = 0, j;

	aux = head;
	while (aux != NULL)
	{
		aux2 = head;
		i++;
		printf("[%p] %d\n", (void *)aux, aux->n);
		aux = aux->next;

		for (j = 0; j < i; j++)
		{
			if (aux2 <= aux)
			{
				printf("-> [%p] %d\n", (void *)aux, aux->n);
				return (i);
			}
			aux2 = aux2->next;
		}
		if (head == NULL)
			exit(98);
	}

	return (i);
}
