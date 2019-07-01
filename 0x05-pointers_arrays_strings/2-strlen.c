#include "holberton.h"
/**
 * _strlen - length of a string
 * @s: char parameter
 */
int _strlen(char *s)
{
	int i,c;
	
	for (i = 0; s[i] != '\0'; i++)
		c++;
	return (c);
}
