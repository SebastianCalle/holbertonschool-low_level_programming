#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: first parameter
 * @size: size of array
 * Return: memory for an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);

}
