#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - retruns the length of a string
 * @s: string parameter
 * Return: the length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen(s + 1) + 1);
}
/**
 * _compare - compare the string
 * @s: string parameter
 * @l: lenght parameter
 * @c: count parameter
 * Return: 1 if is polindrome, 0 if not
 */
int _compare(char *s, int l, int c)
{
	if (l <= c)
		return (1);
	if (s[l] == s[c])
	{
		return (_compare(s, l - 1, c + 1));
	}
	else
		return (0);
}
/**
 * is_palindrome - print if a string is a palindrome
 * @s: string
 * Return: 1 if is palindrome else 0
 */
int is_palindrome(char *s)
{
	int l = _strlen(s) - 1;
	int c = 0;

	return (_compare(s, l, c));
}
