#include <stdio.h>
/**
 * main - number fibonacci
 * Return: 0
 */
int main(void)
{
	int g = 1;
	int f = 2;
	int n, i, a;

	for (i = 0; i <= 4000000; i++)
	{
		n = g + f;
		g = f;
		f = n;
		if (n % 2 == 0)
		{
			a = a + n; 
			printf("%d, ", a);
		}
	}
	printf("\n");
}
