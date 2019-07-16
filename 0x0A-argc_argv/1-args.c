#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: coutn
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
		;
	printf("%d\n", argc - 1);
	return (0);
}
