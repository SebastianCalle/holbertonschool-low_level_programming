#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - print the size of a string
 * @s: char parameter
 * Return: 0
 */
int _strlen(char *s)
{
	unsigned int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: size of bits
 * Return: concatenate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;
	unsigned int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = (unsigned int)_strlen(s1);
	ns = malloc(len + n + 1 * sizeof(char));
	if (ns == NULL)
		return (NULL);
	for (i = 0, j = 0; i < (len + n); i++)
	{
		if (i < len)
			ns[i] = s1[i];
		else
		{
			ns[i] = s2[j];
			j++;
		}

	}
	ns[i] = '\0';
	return (ns);
}
