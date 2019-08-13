#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to representation
 */
void print_binary(unsigned long int n)
{
	unsigned long i = 1;
	int f = 0, j;

	i = i << 63;
	for (j = 0; j < 64; j++)
	{
		if (f == 0)
		{
			if ((n & i) == 0)
			{
				if (j == 63)
					_putchar('0');
				i = i >> 1;
				continue;
			}
		}
		if ((n & i) != 0)
		{
			f = 1;
			_putchar('1');
		}
		else
			_putchar('0');
		i = i >> 1;
	}
}
