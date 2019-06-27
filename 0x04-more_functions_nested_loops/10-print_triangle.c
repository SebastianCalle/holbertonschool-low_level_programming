#include "holberton.h"
/**
 * print_triangle(2);
 *
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for(j = size; j >= 1; j--)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

}
