#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: parameter destine
 * @src: parameter source
 * @n: integer parameter.
 * Return: destine parameter.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
