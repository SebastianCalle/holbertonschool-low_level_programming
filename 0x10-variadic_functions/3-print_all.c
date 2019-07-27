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
	printf("%d",va_arg(print, int));
}
/**
 * print_all - print anything
 * @format: type of format
 */
void print_all(const char * const format, ...)
{
	print_f pp[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_fl},
	};
	int i = 0, j, k = 0;
	va_list print;

	va_start(print, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (pp[i].c != '\0')
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
	va_end(print);
	printf("\n");
}
