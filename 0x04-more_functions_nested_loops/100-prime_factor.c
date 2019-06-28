#include <stdio.h>
/**
 * main - print prime factor of n
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i, r;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			r = i;

			while (n % i == 0)
			{
				n /= i;
			}
		}
	}

	printf("%ld\n", r);

	return (0);
}
