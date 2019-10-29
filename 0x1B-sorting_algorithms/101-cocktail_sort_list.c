#include "sort.h"
/**
 * cocktail_sort_list - sort double linked list
 * @list: list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current = *list, *forward, *l;
	int swap = 1, i, s = 0, size = 0;

	while (current)
		size++, current = current->next;
	size--, current = *list, l = *list;
	while (swap)
	{
		swap = 0;
		for (i = s; i < size; i++)
		{
			forward = current->next;
			if (current->n > forward->n)
			{
				if (forward->next)
					forward->next->prev = current;
				current->next = forward->next, current->prev->next = forward;
				forward->prev = current->prev, current->prev = forward;
				forward->next = current, swap = 1;
				print_list(l), current = forward; }
			current = current->next; }
		if (!swap)
			break;
		swap = 0, size--, current = current->prev;
		for (i = size - 1; i >= s; i--)
		{
			forward = current->prev;
			if (forward->n > current->n)
			{
				if (forward->prev)
					forward->prev->next = current;
				current->prev = forward->prev;
				current->next->prev = forward, forward->next = current->next;
				current->next = forward, forward->prev = current, swap = 1;
				if (current->prev == NULL)
					l = current;
				print_list(l), current = forward; }
			current = current->prev; }
		current = current->next, *list = l;
	}
}
