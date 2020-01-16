#include "search_algos.h"
#include <math.h>
/**
 * min - find the mind numbert
 * @num1: number 1
 * @num2: number 2
 * Return: the min number
 */
unsigned int min(int num1, int num2)
{
	return ((num1 > num2) ? num2 : num1);
}
/**
 * jump_search - Function that searches for a value in an array
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search
 * Return: value or -1 if not exist
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int a, b, c;

	if (!array)
		return (-1);
	a = 0, b = sqrt(size);
	while (array[(int)(min(b, size) - 1)] < value)
	{
		c = a;
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = b,  b += sqrt(size);
		if (a >= size)
		{
			printf("Value found between index [%d] and [%d]\n", c, a);
			for (; c <= size - 1; c++)
				printf("Value checked array[%d] = [%d]\n", c, array[c]);
			return (-1);
		}
	}

	while (array[a] < value)
	{
		c = a;
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a++;
		if (a == min(b, size))
		{
			printf("Value found between index [%d] and [%d]\n", c, a);
			for (; c <= size - 1; c++)
				printf("Value checked array[%d] = [%d]\n", c, array[c]);
			return (-1);
		}
	}
	if (array[a] == value)
	{
		printf("Value found between index [%d] and [%d]\n", c, a);
		for (; c <= a ; c++)
			printf("Value checked array[%d] = [%d]\n", c, array[c]);
		return (a); }
	else
		return (-1);
}
