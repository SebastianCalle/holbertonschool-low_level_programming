#include "holberton.h"
/**
 * _strlen - print the size of a string
 * @s: char parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
		c++;
	return (c);
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
