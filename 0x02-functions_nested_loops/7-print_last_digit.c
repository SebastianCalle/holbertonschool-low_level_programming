#include "holberton.h"
/**
 * print_last_digit - print the last digit
 * @i: parameters
 * Return: 0
 */
int print_last_digit(int i)
{
	int n;

	if (i < 0)
	{
		n = (i % 10) * -1;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = i % 10;
		_putchar(n + '0');
		return (n);
	}
}
