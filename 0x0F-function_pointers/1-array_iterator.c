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


	for (i = 0; i < (int)size ; i++)
		action(array[i]);
}
