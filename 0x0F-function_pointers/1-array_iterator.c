#include "function_pointers.h"
/**
 * array_iterator - give a parameter on each element of an array
 * @array: array parameter
 * @size: size of array
 * @action: give the accion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr)(int);
	int i;

	ptr = action;

	for (i = 0; i < (int)size ; i++)
		(*ptr)(array[i]);
}
