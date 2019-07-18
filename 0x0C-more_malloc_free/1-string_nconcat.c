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
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int)n > _strlen(s2))
		n = _strlen(s2);
	ns = malloc(_strlen(s1) + n + 1);
	if (ns == NULL)
		return (NULL);
	for (i = 0, len = 0; s1[i] != '\0'; i++, len++)
		ns[len] = s1[i];
	for (i = 0; i != n; i++, len++)
		ns[len] = s2[i];
	ns[len] = '\0';
	return (ns);

}
