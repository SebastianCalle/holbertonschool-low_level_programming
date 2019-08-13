#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number to set
 * @index: position to set
 * Return: 1 if is susccesful or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	i = i << index;
	*n = (*n & ~i);
	return (1);
}
