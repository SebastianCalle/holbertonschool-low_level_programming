#ifndef FUNCTION_LIBRARY
#define FUNCTION_LIBRARY
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size, void (*action)(int));
#endif