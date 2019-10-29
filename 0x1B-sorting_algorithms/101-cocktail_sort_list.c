#include "sort.h"
/**
 * swap_nodes_r - change the nodes in the list
 * @current: current node
 * @forward: forward node
 */
void swap_nodes_r(listint_t *current, listint_t *forward)
{
	if (forward->next)
		forward->next->prev = current;
	current->next = forward->next;
	if (current->prev)
	{
		current->prev->next = forward;
	}
	forward->prev = current->prev;
	current->prev = forward;
	forward->next = current;

}
/**
 * swap_nodes_l - change the nodes in the list
 * @current: current node
 * @forward: forward node
 */
void swap_nodes_l(listint_t *current, listint_t *forward)
{
	if (forward->prev)
		forward->prev->next = current;
	current->prev = forward->prev;
	current->next->prev = forward;
	forward->next = current->next;
	current->next = forward;
	forward->prev = current;

}
/**
 * cocktail_sort_list - sort double linked list
 * @list: list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current = *list, *forward, *l;
	int swap = 1, i, s = 0, size = 0;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
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
				swap_nodes_r(current, forward), swap = 1;
				if (!forward->prev)
					l = forward;
				print_list(l), current = forward;
			}
			current = current->next; }
		if (!swap)
			break;
		swap = 0, size--, current = current->prev;
		for (i = size - 1; i >= s; i--)
		{
			forward = current->prev;
			if (forward->n > current->n)
			{
				swap_nodes_l(current, forward);
				if (current->prev == NULL)
					l = current;
				print_list(l), current = forward, swap = 1;
			}
			current = current->prev;
		}
		current = current->next, *list = l;
	}
}
