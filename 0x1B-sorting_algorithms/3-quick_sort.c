#include "sort.h"
/**
 * partition - lomuto partition scheme
 * @array: array to sort
 * @f: first element
 * @l: last element
 * @size: size of array
 * Return: the pivot
 */
size_t partition(int *array, int f, int l, size_t size)
{
	int tmp, j, pivot = array[l];
	int i = f - 1;

	for (j = f; j <= l; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	return (i);

}
/**
 * quick_sort_end - sorted recursive
 * @array: array to sort
 * @f: first element
 * @l: last element
 * @size: size of array
 */
void quick_sort_end(int *array, int f, int l, size_t size)
{
	int pivot;

	if (f < l)
	{
		pivot = partition(array, f, l, size);
		quick_sort_end(array, f, (pivot - 1), size);
		quick_sort_end(array, (pivot + 1), l, size);
	}

}
/**
 * quick_sort - function that sorted array
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int f = 0, l = size - 1;

	if (!array || size == 1)
		return;
	quick_sort_end(array, f, l, size);
}
