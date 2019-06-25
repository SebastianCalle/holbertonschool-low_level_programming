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

	printf("%d, %d, ", g, f);
	for (i = 0; i <= 50; i++)
	{
		if (i <= 49)
		{
			n = g + f;
			g = f;
			f = n;
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
