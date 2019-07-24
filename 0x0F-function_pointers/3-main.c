#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - program that do operations
 * @argc: count arguments
 * @argv: array parameters
 * Return: 0 is susccesful
 */
int main(int argc, char *argv[])
{
	int a, b, r;
	char s;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (s != '+' && s != '-' && s != '*'
			&& s != '/' && s != '%')
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]))
	{
		r = get_op_func(argv[2])(a, b);
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
