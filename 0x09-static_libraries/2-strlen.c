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
