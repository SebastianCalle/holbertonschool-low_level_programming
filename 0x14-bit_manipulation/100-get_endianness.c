#include "holberton.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if is big endian 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int i = 1;

	if (i << 63)
		return (1);
	else
		return (0);
}
