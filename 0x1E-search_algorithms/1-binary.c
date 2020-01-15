#include "search_algos.h"
/**
 * binary_search - Function that searches for a value in a array
 * @array: pointer to first element to array
 * @size: size of array
 * @value: value to search
 * Return: Value or -1 if not exist
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m, i, f;

	if (array == NULL)
		return (-1);
	l = i = 0;
	r = (int)size - 1;
	f = r;

	while (l <= r)
	{
		printf("Searching in array: ");
		f = r;
		for ( ; array[i] <= f; i++)
		{
			if (i == f)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
			i = l;
		}
		else if (array[m] > value)
		{
			r = m - 1;
			i = 0;
		}
		else
			return (m);

	}
	return (-1);

}
