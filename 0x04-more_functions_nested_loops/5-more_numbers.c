#include "holberton.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{

		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		for (i = 48; i < 53; i++)
		{
			_putchar('1');
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
