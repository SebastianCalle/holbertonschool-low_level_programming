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
 * argstostr - concatenates all the arguments
 * @ac: ammount arguments
 * @av: arguments
 * Return: the arguments in new line
 */
char *argstostr(int ac, char **av)
{
	int i, len;
	char *str;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}
	return (str);
}
