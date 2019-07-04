#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * @s: string to converte
 * Return: return string upper
 */
char *string_toupper(char *s)
{
	int i;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
