#include "holberton.h"
/**
 * print_rev - print rev string
 * @s: parameter
 */
void print_rev(char *s)
{
	int i, start, end;
	int count = 0;
	char rev[1000];

	for (i = 0; s[i] != '\0'; i++)
		count++;
	end = count - 1;
	for (start = 0; start < count; start++)
	{
		rev[start] = s[end];
		end--;
		_putchar(rev[start]);
	}
	_putchar('\n');
}
