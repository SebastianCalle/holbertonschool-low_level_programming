#include "holberton.h"
/**
 * times_table - print the table still 9
 * Return: 0
 */
void times_table(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			p = m * n;
			if (p > 9)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else if (m != 0)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(p + '0');
			}

			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
