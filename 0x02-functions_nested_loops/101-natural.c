#include <stdio.h>
/**
 * main - print the multiples numbers and sum these
 * Return: 0
 */
int main(void)
{
	int n;
	int j;

	for (n = 0; n < 1024; n++)
	{

		if (n % 3 == 0 || n % 5 == 0)
		{
			j = j + n;
		}
	}

	printf("%d\n", j);
	return (0);

}
