#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments
 * @argc: coutn
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res, i;

	res = 0;
	if (argc > 1)
	{
		for (i = 1;argv[i]; i++)
		{
			if (*(argv[i]) != '0' && atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				res += atoi(argv[i]);

		}
		printf("%d\n", res);
	}
	else
		printf("Error\n");
	
	return (0);
}
