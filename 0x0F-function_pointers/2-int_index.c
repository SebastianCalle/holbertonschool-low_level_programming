#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: function that compare values
 * Return: the index -1 if no matches element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		int (*ptr)(int);

		ptr = cmp;
		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (ptr(array[i]))
					return (i);
			}
			return (-1);

		}
	}
	return (0);
}
