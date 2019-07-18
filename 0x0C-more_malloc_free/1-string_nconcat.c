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
 * _strncpy - copies a string
 * @dest: - parameter destine
 * @src: - parameter source
 * @n: parameter integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - concaenate two strings
 * @dest: parameter dest
 * @src: parameter source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = _strlen(dest);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of bits
 * Return: string concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;
	char *ns2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ns2 = malloc(_strlen(s2) + 1);
	if (ns2 == NULL)
		return (NULL);
	_strncpy(ns2, s2, n);
	ns = malloc(_strlen(s1) + _strlen(ns2) + 1);
	if (ns == NULL)
		return (NULL);
	_strcpy(ns, s1);
	_strcat(ns, ns2);
	return (ns);

}
