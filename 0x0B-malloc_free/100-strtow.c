#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * agc - number of words
 * @str: string parameter
 * Return: the number of words
 */
int agc(char *str)
{
	int i, c;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i] != '\0') 
			c++;
	}
	return (c);
}
/**
 * strtow - split a string into words
 * @str: string parameter
 * Return: string split
 */
char **strtow(char *str)
{
	int i, len;
	char *s;

	len = agc(str);
	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0' && str[i] != ' '; i++)
		s++ = str[i];
	printf("%d", len);

	return (s);
}
