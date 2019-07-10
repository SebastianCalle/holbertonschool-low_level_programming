#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints te sum of two diagonals of a square matrix int
 * @a: parameter
 * @size: size of matix
 * Return: return the sum
 */
void print_diagsums(int *a, int size)
{
	int i, l, sum1, sum2;
	int j = size * size;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < j)
	{
		l = a[i];
		sum1 += l;
		i = i + size + 1;

	}
	i = size - 1;
	while (i < j - 2)
	{
		l = a[i];
		sum2 += l;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
