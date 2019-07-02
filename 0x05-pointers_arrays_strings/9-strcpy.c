#include "holberton.h"
/**
 * _strcpy - copie a string
 * @dest: destine of copy
 * @src: source of copy
 * Return: return copie
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (i = 0; src[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (dest);
}
