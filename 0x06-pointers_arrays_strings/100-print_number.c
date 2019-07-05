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
		_putchar('-');
		m = m * -1;
	}

	if ((m / 10) > 0)
		print_number(m / 10);

	_putchar((m % 10) + '0');
}
