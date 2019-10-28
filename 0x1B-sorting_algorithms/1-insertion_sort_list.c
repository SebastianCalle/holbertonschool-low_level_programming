#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked lists
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *other, *aux, *aux2, *l, *p, *this;
	int flag = 0;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	current = *list, l = *list;
	while (current)
	{
		if (current->next)
			other = current->next;
		if (other->n < current->n)
		{
			aux2 = other, this = current->prev;
			while (aux2)
			{
				p = current->prev, aux = other->next;
				if (other->n < current->n)
				{
					if (aux)
						aux->prev = current;
					current->next = aux, current->prev = other;
					other->next = current;
					if (p != NULL)
						other->prev = p, p->next = other;
					else
						other->prev = NULL, l = other;
					print_list(l), flag = 1;
				}
				other = aux2, aux2 = aux2->prev, current = aux2;
			}
			if (current)
				other = current->next, current = this->next;
		}
		if (flag == 1)
			current = other, flag = 0;
		else
			current = current->next;
	}
	*list = l;
}
