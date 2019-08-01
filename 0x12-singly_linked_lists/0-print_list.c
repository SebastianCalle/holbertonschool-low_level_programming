#include "lists.h"
/**
 * print_list - print elements of list_t
 * @h: list structure pointer
 * Return: size of node
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			c++;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}

	return (c);
}
