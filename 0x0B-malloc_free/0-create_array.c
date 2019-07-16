#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and init with especific char
 * @size: size of char
 * @c: char especific
 * Return: Null if size is 0 or it fails, and a pointer array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(c) * size);
	if (size == 0)
		return (NULL);
	else if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
	free(str);
}
