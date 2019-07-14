#include "holberton.h"
/**
 * _strlen - return len of string
 * @s: parameter
 * Return:  len
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}
/**
 * _strncat - function to concatnate strings with n iytes
 * @dest: destinition for concatnation
 * @src: source of string
 * @n: int type for size of iyte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	return (dest);
}
