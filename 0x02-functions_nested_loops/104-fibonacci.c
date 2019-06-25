#include <stdio.h>
#define d 1000000000
/**
 * main - first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int ia = 0, i = 1, ja = 0, j = 2;
	unsigned long int aa, bb, cc;
	int c;

	printf("%lu, %lu, ", i, j);
	while (c < 98)
	{
		if (i + j > d || ja > 0 || ia > 0)
		{
			aa = (i + j) / d;
			bb = (i + j) % d;
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
			i = j;
			j = bb;
			printf("%lu", j);
		}
		if (c != 97)
			printf(", ");
		c++;
	}
	printf("\n");
}
