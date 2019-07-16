#include "holberton.h"
#include <stdlib.h>
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
 * _strcpy - copie a string
 * @dest: destine of copy
 * @src: source of copy
 * Return: return copie
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - return a pointer to a newly allocate space in memory
 * @str: string parameter
 * Return: the string in a new allocate
 */
char *_strdup(char *str)
{
	char *ns;

	ns = malloc(_strlen(str) + 1);
	if (str == NULL)
		return (NULL);
	if (ns == NULL)
		return (NULL);
	_strcpy(ns, str);
	return (ns);
}
