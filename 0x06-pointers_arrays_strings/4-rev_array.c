#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tem;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		tem = a[i];
		a[i] = a[n];
		a[n] = tem;
		n--;
		i++;
	}
}
