#include "sort.h"
/**
 * merge - merge 2 arrays
 * @array: integer array
 * @first: lower idx
 * @m: middle idx
 * @last: higher
 * @b: 2nd integer array
 */
void merge(int *b, int first, int m, int last, int *array)
{
	int i, j, k;

	i = first;
	j = m;

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
 * top_down_split_merge - split an array recursive
 * @array: integer array
 * @first: lower idx
 * @last: higher
 * @b: 2nd integer array
 * @size: array's size
 */
void top_down_split_merge(int *b, int first, int last, int *array, size_t size)
{
	int m;

	if (last - first < 2)
		return;
	m = (last + first) / 2;
	top_down_split_merge(array, first, m, b, size);
	top_down_split_merge(array, m, last, b, size);
	merge(b, first, m, last, array);
}
/**
 * copyarray - copy 'array' in 'b'
 * @array: integer array
 * @first: lower idx
 * @last: higher
 * @b: 2nd integer array
 */
void copyarray(int *array, int first, int last, int *b)
{
	int i;

	for (i = first; i < last; i++)
		b[i] = array[i];
}
/**
 * mergeSort - merge first call
 * @array: integer array
 * @b: 2nd integer array
 * @size: array's size
 */
void mergeSort(int *array, int *b, size_t size)
{
	copyarray(array, 0, size, b);
	top_down_split_merge(b, 0, size, array, size);
}
/**
 * merge_sort - sorts an array of integers in asclasting order
 * @array: integer array
 * @size: array's size
 */
void merge_sort(int *array, size_t size)
{
	int *b;

	b = malloc(size * sizeof(int));
	if (array)
	{
		mergeSort(array, b, size);
		copyarray(b, 0, size, array);
	}
	free(b);
}
