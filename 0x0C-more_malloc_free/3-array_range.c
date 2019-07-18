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
	int j, len, k;

	if (min > max)
		return (NULL);
	len = max - min;
	i = malloc(sizeof(int) * (len + 1));
	if (i == NULL)
		return (NULL);
	k = min;
	for (j = 0; k <= max; j++)
	{
		i[j] = k;
		k++;
	}
	return (i);
}
