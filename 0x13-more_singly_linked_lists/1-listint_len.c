#include "lists.h"
/**
 * listint_len - return the number of elements in a linked
 * @h: pointer tu structure
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (-1);
	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
