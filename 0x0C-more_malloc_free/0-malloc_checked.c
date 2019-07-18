#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memoring
 * @b: parameter type of data
 * Return: pointer to hte allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
