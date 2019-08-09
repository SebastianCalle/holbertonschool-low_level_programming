#include "holberton.h"
/**
 * flip_bits - return the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 1;
	unsigned int bit = 0;
	int j = 0;

	while (j < 64)
	{
		if (i & (m ^ n))
			bit++;
		i = i << 1;
		j++;
	}
	return (bit);
}
