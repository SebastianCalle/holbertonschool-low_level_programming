#include "holberton.h"
/**
 *main - prints the alphabet
 *Return: 0
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char lc = 'a';
	char n = '\n';

	while (i < 10)
	{
		while (lc < 123)
		{
		_putchar(lc);
		lc++;
		}
		_putchar(n);
		i++;
		lc = 'a';
	}
}

