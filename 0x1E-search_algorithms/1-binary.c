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
	int l, r, m, i;

	if (array == NULL || size == 0)
		return (-1);
	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Seaching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);

	}
	return (-1);

}
