#include "holberton.h"
/**
 * get_bit -get the value of a bit at a given index
 * @n: number to convert
 * @index: number of index
 * Return: index is is susccesful or -1 if not
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long i = 1;
	int f = 0, j, num[64];
	unsigned int c = 0;

	i = i << 63;
	for (j = 0; j < 64; j++)
	{
		if (f == 0)
		{
			if ((n & i) == 0)
			{
				if (j == 63)
					num[j] = 0;
				i = i >> 1;
				continue;
			}
		}
		if ((n & i) != 0)
		{
			f = 1;
			num[j] = 1;
		}
		else
			num[j] = 0;
		i = i >> 1;
	}
	j = 63;
	while (c < (index + 1))
	{
		if (c == index)
			return (num[j]);
		else if (c > index)
			return (-1);
		c++;
		j--;
	}
	return (0);
}
