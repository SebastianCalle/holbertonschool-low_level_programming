#include "holberton.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string parameter
 * @accept: string accepte
 * Return: marches one of the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
		s++;
	}
	return (NULL);
}
