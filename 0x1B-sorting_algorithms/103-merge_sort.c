#include "sort.h"
/**
 * copy_arr - copy 'array' in 'aux'
 * @array: integer array
 * @start: lower idx
 * @end: higher
 * @aux: 2nd integer array
 * Return: nothing
 */
void copy_arr(int *array, int start, int end, int *aux)
{
	int i;

	for (i = start; i < end; i++)
		aux[i] = array[i];
}
/**
 * merge - merge 2 arrays
 * @array: integer array
 * @start: lower idx
 * @middle: middle idx
 * @end: higher
 * @aux: 2nd integer array
 * Return: nothing
 */
void merge(int *aux, int start, int middle, int end, int *array)
{
	int i, j, k;

	i = start;
	j = middle;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + start, middle - start);
	printf("[right]: ");
	print_array(array + middle, end - middle);
	for (k = start; k < end; k++)
	{
		if (i < middle && (j >= end || array[i] <= array[j]))
		{
			aux[k] = array[i];
			i++;
		}
		else
		{
			aux[k] = array[j];
			j++;
		}
	}
	printf("[Done]: ");
	print_array(aux + start, end - start);
}
/**
 * split_merge - split an array recursive
 * @array: integer array
 * @start: lower idx
 * @end: higher
 * @aux: 2nd integer array
 * @size: array's size
 * Return: nothing
 */
void split_merge(int *aux, int start, int end, int *array, size_t size)
{
	int middle;

	if (end - start < 2)
		return;
	middle = (end + start) / 2;
	split_merge(array, start, middle, aux, size);
	split_merge(array, middle, end, aux, size);
	merge(aux, start, middle, end, array);
}
/**
 * m_sort - merge first call
 * @array: integer array
 * @aux: 2nd integer array
 * @size: array's size
 * Return: nothing
 */
void m_sort(int *array, int *aux, size_t size)
{
	copy_arr(array, 0, size, aux);
	split_merge(aux, 0, size, array, size);
}
/**
 * merge_sort - sorts an array of integers in ascending order
 * @array: integer array
 * @size: array's size
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{
	int *aux;

	aux = malloc(size * sizeof(int));
	if (array)
	{
		m_sort(array, aux, size);
		copy_arr(aux, 0, size, array);
	}
	free(aux);
}
