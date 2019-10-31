#include "sort.h"
#include <stdlib.h>

/**
 * merge - merge of array
 * @array: to merge
 * @f: first element
 * @m: middle element
 * @l: last element
 */
void merge(int *array, int f, int m, int l)
{
	int *tmp = NULL;
	int i = 0, l1 = f, r1 = m, l2 = m + 1, r2 = l;

	tmp = (int *)malloc((l - f + 1) * sizeof(int));
	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + f, m - f);
	printf("[right]: ");
	print_array(array + m, l - m);
	while ((l1 <= r1) && (l2 <= r2))
	{
		if(array[l1] < array[l2])
			tmp[i++] = array[l1++];
		else
			tmp[i++] = array[l2++];
	}
	while (l1 <= r1)
		tmp[i++] = array[l1++];
	while (l2 <= r2)
		tmp[i++] = array[l2++];

	for (i = f; i <= l; i++)
		array[i] = tmp[i - f];

	free(tmp);
}

/**
 * mergeSort - recursion of merge sort
 * @array: array to sort
 * @f: first element
 * @l: last element
 */
void mergeSort(int *array, int f, int l)
{
	int m = 0;

	if (f < l)
	{
		m = (f + l) / 2;
		mergeSort(array, f, m);
		mergeSort(array, m + 1, l);

		merge(array, f, m, l);
	}
}


/**
 * merge_sort - sort array whit merge sort algortihm
 * @array: array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int f = 0;
	int l = size - 1;
	mergeSort(array, f, l);
}
