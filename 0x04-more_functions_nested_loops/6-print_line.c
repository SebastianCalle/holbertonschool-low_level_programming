#include "holberton.h"
/**
 * print_line - print a line
 * @n: recive a integer
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
