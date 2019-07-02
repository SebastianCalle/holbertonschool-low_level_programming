#include "holberton.h"
/**
 * puts_half - print half string
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, len, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
