#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int x;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + 1) < size)
			{
				if (array[j] > array[j + 1])
				{
					x = array[j];
					array[j] = array[j + 1];
					array[j + 1] = x;
					print_array(array, size);

				}
			}
		}
	}
}
