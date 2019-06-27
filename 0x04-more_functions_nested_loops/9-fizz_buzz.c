#include <stdio.h>
/**
 * main - print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("buzz");
		else if (i % 3 == 0)
			printf("fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");

	}
	printf("\n");
	return (0);
}
