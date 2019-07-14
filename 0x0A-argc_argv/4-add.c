#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numfer of arguments
 * @argc: coutn
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res, f, i;

	res = 0;
	f = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*(argv[i]) != '0' && atoi(argv[i]) == 0)
				f = 0;
			res += atoi(argv[i]);
		}
	}
	if (f == 1)
		printf("%d\n", res);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
