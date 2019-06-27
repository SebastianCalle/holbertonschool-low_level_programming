#include <stdio.h>
#define DIVIDER 10000000000
/**
 * main - The first 98 fibonacci
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
		if (i + j > DIVIDER || ja > 0 || ia > 0)
		{
			aa = (i + j) / DIVIDER;
			bb = (i + j) % DIVIDER;
			cc = ia + ja + aa;
			ia = ja;
			ja = cc;
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
