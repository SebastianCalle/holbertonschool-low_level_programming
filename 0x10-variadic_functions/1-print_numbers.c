#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string that separate numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d\n", va_arg(numbers, int));
		else
		{
			if (i == n - 1)
				printf("%d\n", va_arg(numbers, int));
			else
				printf("%d%s", va_arg(numbers, int), separator);
		}
	}
	va_end(numbers);
}
