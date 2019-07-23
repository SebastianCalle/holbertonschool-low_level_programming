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
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i;
	int lname = _strlen(name);
	int lowner = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(char) * lname + 1);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i <= lname; i++)
		doggy->name[i] = name[i];
	doggy->age = age;
	doggy->owner = malloc(sizeof(char) * lowner + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i <= lowner; i++)
		doggy->owner[i] = owner[i];
	return (doggy);

}
