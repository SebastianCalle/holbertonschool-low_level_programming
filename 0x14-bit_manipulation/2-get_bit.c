#include "holberton.h"
#include <stdio.h>
/**
 * get_bit -get the value of a bit at a given index
 * @n: number to convert
 * @index: number of index
 * Return: index is is susccesful or -1 if not
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	i = i << index;
	if (i & n)
		return (1);
	else
		return (0);

}
