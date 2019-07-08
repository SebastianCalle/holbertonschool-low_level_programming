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
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				c++;
		}
		if (!accept[i])
			break;
	}
	return (c);
}
