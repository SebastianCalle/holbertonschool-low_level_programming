#include "lists.h"
/**
 * re_reverse - function reverse a linked list
 * @aux: pointer auxiliar
 * @prev: pointer previus
 * Return: a reversed list
 */
void re_reverse(listint_t **head, listint_t *aux, listint_t *prev)
{

	if(aux != NULL)
	{
		prev = aux;
		aux = aux->next;
		re_reverse(head, aux, prev);
	}
	if (aux == NULL)
	{
		*head = prev;
		return;
	}
	aux->next = prev;

}
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to pointer of structure
 * Return: a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *prev;

	aux = *head;
	prev = NULL;
	re_reverse(&(*head), aux, prev);
	aux->next = prev;
	return (*head);
}
