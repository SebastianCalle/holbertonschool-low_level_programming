#include "holberton.h"
/**
 * times_table - print the table still 9
 *
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
			p = n * m;
			if (p <= 9)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 9)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
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
