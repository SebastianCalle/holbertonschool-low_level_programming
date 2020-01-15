#include "search_algos.h"
/**
 * print_array - print array
 * @i: initial position
 * @f: final position
 * @array: array to print
 */
void print_array(size_t i, size_t f, int *array)
{
	printf("Searching in array: ");
	while (i <= f)
	{
		printf("%d", array[i]);
		if (i != f)
			printf(", ");
		i++;
	}
	printf("\n");

}

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

	while (l <= r)
	{
		f = r;
		print_array(i, f, array);
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
