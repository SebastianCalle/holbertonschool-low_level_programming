#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that print strings
 * @separator: string separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *word;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(str, char *);
		if (word  == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
