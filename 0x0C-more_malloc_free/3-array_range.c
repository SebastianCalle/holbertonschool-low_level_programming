#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first parameter
 * @max: second parameter
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *i;
	int j;
	
	if (min > max)
		return (NULL);
	i = malloc(sizeof(int) * (max + 1));
	if (i == NULL)
		return (NULL);
	j = 0;
	for (j = min; j <= max; j++)
		i[j] = min++;
	return (i);
}
