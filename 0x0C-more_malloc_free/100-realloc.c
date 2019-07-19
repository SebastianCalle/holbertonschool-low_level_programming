#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: the size of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrn;
	unsigned int i;


	if (ptr == NULL)
	{
		ptrn = malloc(new_size);
		return (ptrn);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptrn = malloc(new_size);
	if (ptrn == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ptrn[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptrn);
}
