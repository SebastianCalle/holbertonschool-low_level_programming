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
 * rev_string - print rev string
 * @s: parameter
 */
void rev_string(char *s)
{
	int start;
	int len;
	char a, z;

	len = _sterlen(s) - 1;
	for (start = 0; start < len; start++)
	{
		a = s[start];
		z = s[len];
		s[start] = z;
		s[len--] = a;
	}
}
