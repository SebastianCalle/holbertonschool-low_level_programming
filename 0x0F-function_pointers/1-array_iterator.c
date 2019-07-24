#include "function_pointers.h"
/**
 * array_iterator - give a parameter on each element of an array
 * @array: array parameter
 * @size: size of array
 * @action: give the accion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	void (*ptr)(int);

	if (array != NULL && size != 0 && action != NULL)
	{
		ptr = action;
		if (ptr != NULL)
		{
			for (i = 0; i < (int)size ; i++)
				ptr(array[i]);

		}
	}
}
