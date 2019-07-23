#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - retruns the length of a string
 * @s: string parameter
 * Return: the length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen(s + 1) + 1);
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
 * _strdup - return a pointer to a newly allocate space in memory
 * @str: string parameter
 * Return: the string in a new allocate
 */
char *_strdup(char *str)
{
	char *ns;

	if (str == NULL)
		return (NULL);
	ns = malloc(_strlen(str) + 1);
	if (ns == NULL)
		return (NULL);
	_strcpy(ns, str);
	return (ns);
}
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->name = _strdup(name);
	if (doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->age = age;
	doggy->owner = _strdup(owner);
	if (doggy->owner == NULL)
	{
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}
	return (doggy);

}
