#include <stdio.h>
#define d 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int ia = 0, i = 1, ja = 0, j = 2;
	unsigned long int aa, bb, cc;
	int c;

	printf("%lu, %lu, ", i, j);
	for (c = 2; c < 98; c++)
	{
		if (i + j > d || ja > 0 || ia > 0)
		{
			aa = (i + j) / d;
			bb = (i + j) % d;
			cc = ia + ja + aa;
			ia = ja;
			fr2 = cc;
			i = j;
			j = bb;
			printf("%lu%010lu", ja, j);
		}
		else
		{
			bb = i + j;
			i = j, j = bb;
			printf("%lu", j);
		}
		if (c != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
