#include "holberton.h"
/**
 * leet - encodes a string
 * @s: parameter
 * Return: Return string encode
 */
char *leet(char *s)
{
	int i, j;
	char encode[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; encode[j] != '\0'; j++)
		{
			if (s[i] == encode[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}

