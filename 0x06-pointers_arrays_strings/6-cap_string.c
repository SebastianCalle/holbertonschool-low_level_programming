#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: return words capitalizes
 */
char *cap_string(char *s)
{
	int i, b;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		b = i - 1;
		if ((s[b] == ' ' || s[b] == '\t' || s[b] == '\n'
		    || s[b] == ',' || s[b] == ';' || s[b] == '.'
		    || s[b] == '!' || s[b] == '?' || s[b] == '"'
		    || s[b] == '(' || s[b] == ')' || s[b] == '{'
		    || s[b] == '}') && (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
