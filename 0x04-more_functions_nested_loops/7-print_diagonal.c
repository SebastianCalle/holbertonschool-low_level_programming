#include "holberton.h"
/**
 * print_diagonal - print a diagonal
 * @n: recive a integer
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
