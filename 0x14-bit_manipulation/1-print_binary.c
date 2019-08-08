#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to representation
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 1 << 31;
	int f = 0, j;

	for (j = 0; j < 32; j++)
	{
		if (f == 0)
		{
			if ((n & i) == 0)
			{
				if (j == 31)
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
