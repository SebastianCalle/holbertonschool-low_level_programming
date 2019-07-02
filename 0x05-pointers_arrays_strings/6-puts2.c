#include "holberton.h"
/**
 * _sterlen - give the len of string
 * @s: parameter
 * Return: return len
 */
int _sterlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	count++;

	return (count);
}
/**
 * puts2 - print out of 2 a string
 * @str: pointer to string
 */
void puts2(char *str)
{
	int i, len;

	len = _sterlen(str);
	for (i = 0; i < len ; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
