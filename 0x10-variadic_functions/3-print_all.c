#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_c - print character
 * @print: argument
 */
void print_c(va_list print)
{
	printf("%c", va_arg(print, int));
}
/**
 * print_s - print string
 * @print: argument
 */
void print_s(va_list print)
{
	char *s;

	s = va_arg(print, char*);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_fl - print floats
 * @print: argument
 */
void print_fl(va_list print)
{
	printf("%f", va_arg(print, double));
}
/**
 * print_i - print integers
 * @print: argument
 */
void print_i(va_list print)
{
	printf("%d", va_arg(print, int));
}
/**
 * print_all - print anything
 * @format: type of format
 */
void print_all(const char * const format, ...)
{
	int i, j, k;
	va_list print;
	print_f pp[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_fl},
	};

	va_start(print, format);
	i = 0;
	k = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == pp[j].c[0])
			{
				switch (k)
				{
					case 0:
						break;
					default:
						printf(", ");
				}
				pp[j].f(print);
				k++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(print);
}
