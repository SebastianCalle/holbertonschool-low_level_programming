#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all numbers
 * @n: number of arguments
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start (numbers, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg (numbers, int);
	}
	va_end (numbers);

	return (sum);

}
