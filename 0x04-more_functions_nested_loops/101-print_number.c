#include "holberton.h"
/**
 * print_number - print integers
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		if ((n / 10) < 0)
		{
			_putchar('-');
			print_number(m);

		}
		_putchar ((m % 10) + '0');
	}

	if ((m / 10) > 0)
		print_number(m / 10);

	_putchar((m % 10) + '0');
}
