#include "lists.h"
/**
 * print_listint_safe - print a listint_t
 * @head: a constat listint_t *head
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *aux, *aux2;
	size_t i = 0;

	aux = head;
	if (aux == NULL)
		exit(98);

	while (aux != NULL)
	{
		aux2 = aux;
		aux = aux->next;
		i++;
		printf("[%p] %d\n", (void *)aux2, aux2->n);

		if (aux2 < aux)
		{
			printf("-> [%p] %d\n", (void *)aux, aux->n);
			break;
		}
	}

	return (i);
}
