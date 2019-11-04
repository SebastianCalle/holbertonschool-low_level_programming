#include "sort.h"
#include <stdlib.h>
/**
 * top_down_merge - merge for split array
 * @array: array source
 * @first: first element
 * @m: middle element
 * @last: last element
 * @b: array dest
 */
void top_down_merge(int *array, int first, int  m, int last, int *b)
{
	int i = first, j = m;
	int k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + first, m - first);
	printf("[right]: ");
	print_array(array + m, last - m);
	for (k = first; k < last; k++)
	{
		if (i < m && (j >= last || array[i] <= array[j]))
		{
			b[k] = array[i];
			i++;
		}
		else
		{
			b[k] = array[j];
			j++;
		}
	}
	printf("[Done]: ");
	print_array(b + first, last - first);
}
/**
 * top_down_split_merge - recursion for split array
 * @b: array dest
 * @first: first element
 * @last: last element
 * @array: array source
 */
void top_down_split_merge(int *b, int first, int last, int *array)
{
	if (last - first < 2)
		return;

	int m = (last + first) / 2;

	top_down_split_merge(array, first, m, b);
	top_down_split_merge(array, m, last, b);

	top_down_merge(b, first, m, last, array);
}
/**
 * copyarray - copy of array
 * @array: array source
 * @first: first element
 * @last: last element
 * @b: array dest
 */
void copyarray(int *array, int first, int last, int *b)
{
	int i;

	for (i = first; i < last; i++)
	{
		b[i] = array[i];
	}
}

/**
 * mergeSort - recursion of merge sort
 * @array: array to sort
 * @size: size of array
 * @b: array aux
 */
void mergeSort(int *array, int size, int *b)
{
	copyarray(array, 0, size, b);
	top_down_split_merge(b, 0, size, array);
}


/**
 * merge_sort - sort array whit merge sort algortihm
 * @array: array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *b = malloc(sizeof(int) * size);

	mergeSort(array, size, b);
}
