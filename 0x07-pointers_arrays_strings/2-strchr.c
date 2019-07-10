#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string parameter
 * @c: character
 * Return: character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
