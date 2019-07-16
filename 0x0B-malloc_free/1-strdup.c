#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a pointer to a newly allocate space in memory
 * @str: string parameter
 * Return: the string in a new allocate
 */
char *_strdup(char *str)
{
	char *ns;

	ns = malloc(sizeof(str) * strlen(str));
	if (str == NULL)
		return (NULL);
	strcpy(ns, str);
	return (ns);
	free(ns);
}
