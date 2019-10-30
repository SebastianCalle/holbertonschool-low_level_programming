#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - function that sorts an array of integers using counting
 * @array: array to sort
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	int *counts, *tmp;
	int i, j, k, nsize = size;

	if (!array || size < 2)
		return;
	for (i = 1, k = 0; i < nsize; i++)
		if (array[k] < array[i])
			k = i;

	k = array[k] + 1;
	counts = malloc(sizeof(int) * k);
	if (!counts)
		return;
	tmp = malloc(size * sizeof(int));
	if (!tmp)
	{
		free(counts);
		return;
	}
	for (i = 0; i < k; i++)
		counts[i] = 0;
	for (j = 0; j < nsize; j++)
		counts[array[j]] = counts[array[j]] + 1;
	for (i = 1; i < k; i++)
		counts[i] = counts[i] + counts[i - 1];
	print_array(counts, k);
	nsize--, i = 0;
	for (j = nsize ; j >= i; j--)
	{
		tmp[counts[array[j]] - 1] = array[j];
		counts[array[j]] = counts[array[j]] - 1;
	}
	nsize = size;
	for (i = 0; i < nsize; i++)
	{
		array[i] = tmp[i];
	}
	free(counts);
	free(tmp);
}
