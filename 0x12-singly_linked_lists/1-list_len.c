#include "lists.h"
/**
 * list_len - print elements of list_t
 * @h: list structure pointer
 * Return: size of node
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
			c++;
		}
		h = h->next;
		c++;
	}

	return (c);
}
