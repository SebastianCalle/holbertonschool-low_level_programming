#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_c - print character
 * @print: argument
 */
void print_c(va_list print)
{
	char arg;

	arg = va_arg(print, int);
	printf("%c", arg);
}
/**
 * print_s - print string
 * @print: argument
 *
 */
void print_s(va_list print)
{
	char *s;

	s = va_arg(print, char*);
	if (s != NULL)
		printf("%s", s);
	else
	{
		printf("(nil)");
		return;
	}
}
/**
 * print_fl - print floats
 * @print: argument
 */
void print_fl(va_list print)
{
	float f;

	f = va_arg(print, double);
	printf("%f", f);
}
/**
 * print_i - print integers
 * @print: argument
 */
void print_i(va_list print)
{
	int num;

	num = va_arg(print, int);
	printf("%d", num);
}
/**
 * print_all - print anything
 * @format: type of format
 */
void print_all(const char * const format, ...)
{

	print_f pp[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_fl},
		{NULL, NULL}
	};
	int i, j, k;
	va_list print;

	va_start(print, format);
	i = 0;
	k = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (pp[i].c)
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
