#include <stdio.h>
/**
 * print_name - print a name
 * @name: name to print
 * @f: function that print
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);
	ptr = f;
	(*ptr)(name);
}