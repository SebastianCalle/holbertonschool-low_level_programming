#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * merge - merge the array
 * @array: array to split
 * @l: first index
 * @m: middle index
 * @f: final index;
 */
void merge(int *array, int l, int m, int f)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = f - m;

	int L[n1], R[n2];
	printf("Merging...\n");
	printf("[Left]: ");
	print_array(array + l, m - l);
	printf("[Rigth]: ");
	print_array(array + m, f - l);

	for (i = 0; i < n1; i++)
		L[i] = array[l + i];
	for (j = 0; j < n2; j++)
		R[j] = array[m + 1 + j];

	i = j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
			array[k] = L[i], i++;
		else
			array[k] = R[j], j++;
		k++;
	}
	while (i < n1)
	{
		array[k] = L[i];
		i++, k++;
	}
	while (j < n2)
	{
		array[k] = R[j], j++, k++;
	}
}
/**
 * msort - implement recursion
 * @array: - array to sort
 * @l: initial position
 * @f: last position
 */
void msort(int *array, int l, int f)
{

	if (l < f)
	{
		int m = l + (f - l) / 2;

		msort(array, l, m);
		msort(array, m + 1, f);

		merge(array, l, m, f);
	}
}
/**
 * merge_sort - sort array
 * @array: array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int sz = size - 1;

	msort(array, 0, sz);
}
