#ifndef FUNC_
#define FUNC_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print_type - struct of the print all
 * @c: string char
 * @f: pointer to function
 */
typedef struct print_type
{
	char *c;
	void (*f)();
} print_f;
void print_c(va_list print);
void print_s(va_list print);
void print_fl(va_list print);
void print_i(va_list print);
#endif
