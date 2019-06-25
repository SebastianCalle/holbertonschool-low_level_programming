#include "holberton.h"
/**
 * print_times_table - print the n table
 *
 */
void print_times_table(int n)
{
	int d;
	int m;
	int p;

	if (!(n > 15 || n < 0))
	{

		for (d = 0; d <= n; d++)
		{
			for (m = 0; m <= n; m++)
			{
				p = d * m;
				if (p > 99)
				{
					_putchar(p / 100 + '0');
					_putchar((p / 10 % 10) + '0');
					_putchar(p % 10 + '0');
				}
				else if (p > 9)
				{
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else if (m != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else
					_putchar(p + '0');

				if (m != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
