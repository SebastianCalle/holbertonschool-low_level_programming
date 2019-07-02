#include "holberton.h"
/**
 * _strlen - give the len of string
 * @s: parameter
 * Return: return len
 */
int _strlen(char *s)
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
	int i;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
