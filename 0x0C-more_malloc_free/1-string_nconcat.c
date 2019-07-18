#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - print the size of a string
 * @s: char parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
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
 * _strncat - function to concatnate strings with n iytes
 * @dest: destinition for concatnation
 * @src: source of string
 * @n: int type for size of iyte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	return (dest);
}
/**
 * _strncpy - copies a string
 * @dest: - parameter destine
 * @src: - parameter source
 * @n: parameter integer
 * Return: dest
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int)n > _strlen(s2))
		n = _strlen(s2);
	ns = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (ns == NULL)
		return (NULL);
	_strcpy(ns, s1);
	_strncat(ns, s2, n);
	return (ns);

}
