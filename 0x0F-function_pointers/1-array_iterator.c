#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - give a parameter on each element of an array
 * @array: array parameter
 * @size_t size: size of array
 * @action: give the accion
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size ; i++)
		action(array[i]);
}
