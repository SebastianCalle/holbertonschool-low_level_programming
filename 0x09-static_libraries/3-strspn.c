#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string parameter
 * @accept: char accept
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	for (i = 0; s[i]; i++)
	{
		c = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				c = 1;
		}
		if (c == 0)
			break;
	}
	return (i);
}
