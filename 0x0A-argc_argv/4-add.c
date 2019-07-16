#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print number of arguments
 * @argc: coutn
 * @argv: array
 * Return: 0 if is succes or 1 if not
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
