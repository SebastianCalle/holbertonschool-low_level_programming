#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: indext to set
 * @n: value to set
 * Return: 1 if is susscesfull or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	i = i << index;
	*n = (*n | i);
	return (1);
}
