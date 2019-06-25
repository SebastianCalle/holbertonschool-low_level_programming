#include <stdio.h>
/**
 * print_to_98 - print the numberso from n to 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int m = 98;

	if (n == m)
		printf("%d", m);
	else
	{

		while (n < m)
		{
			printf("%d, ", n);
			n++;
			if (n == m)
				printf("%d", n);
		}

		while (n > m)
		{
			printf("%d, ", n);
			n--;
			if (n == m)
				printf("%d", n);
		}
	}
	printf("\n");
}
