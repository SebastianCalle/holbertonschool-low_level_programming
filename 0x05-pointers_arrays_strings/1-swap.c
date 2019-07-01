#include "holberton.h"
/**
 * swap_int - swap the value of two variables
 * @a: parameter one
 * @b: parameter b
 */
void swap_int(int *a, int *b)
{
	int aux = *b;
	int aux2 = *a;

	*a = aux;
	*b = aux2;
}
