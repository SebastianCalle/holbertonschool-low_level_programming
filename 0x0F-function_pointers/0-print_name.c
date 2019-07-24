#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: name to print
 * @f: function that print
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *) = f;
	(*ptr)(name);
}
