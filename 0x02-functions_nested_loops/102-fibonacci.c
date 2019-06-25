#include <stdio.h>
/**
 * main - function fibonacci
 * Return: 0
 */
int main(void)
{
	int c = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (c <= 50)
	{
		if (c == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		c++;
	}
	return (0);
}
