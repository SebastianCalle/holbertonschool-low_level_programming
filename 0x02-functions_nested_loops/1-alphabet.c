#include "holberton.h"
/**
 *print_alphabet - prints the alphabet
 *Return: 0
*/
void print_alphabet(void)
{
	char lc = 'a';
	char n = '\n';

	while (lc < 123)
	{
		_putchar(lc);
		lc++;
	}
	_putchar(n);
}
