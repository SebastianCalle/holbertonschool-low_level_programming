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

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}
/**
 * _strcat - concaenate two strings
 * @dest: parameter dest
 * @src: parameter source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = _strlen(dest);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
/**
 * _strcpy - copie a string
 * @dest: destine of copy
 * @src: source of copy
 * Return: return copie
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: first parameter
 * @size: size of array
 * Retrun: memory for an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

}
