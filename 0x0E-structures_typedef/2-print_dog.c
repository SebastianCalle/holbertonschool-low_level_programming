#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the structure dog
 * @d: structur dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
			printf(" ");
		if (d->name == NULL)
			printf("Name: (nil)");
		if (d->age == 0)
			printf("Age: (nil)");
		if (d->owner == NULL)
			printf("Owner: (nil)");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}
