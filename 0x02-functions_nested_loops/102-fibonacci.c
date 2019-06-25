#include <stdio.h>
/**
 * main - number fibonacci
 * Return: 0
 */
int main(void)
{
	int g = 1;
	int f = 2;
	int n, i;

	for (i = 0; i <= 50; i++)
	{
		n = g + f;
		g = f;
		f = n;
		printf("%d, ", n);
	}
	printf("\n");
}
