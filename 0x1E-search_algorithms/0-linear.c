#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of integers
 * @array: pointer to first elemento of the array
 * @size: size of array
 * @value: value to search
 * Return: the value or -1 if not exist
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
