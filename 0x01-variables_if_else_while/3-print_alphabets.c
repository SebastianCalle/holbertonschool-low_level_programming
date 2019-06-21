#include <stdio.h>
/**
 *main - prints the alphabet
 *Return: 0
*/
int main(void)
{
	char lc = 'a';
	char n = '\n';
	char uc = 'A';

	while (lc < 123)
	{
		putchar(lc);
		lc++;
	}
	while (uc < 91)
	{
		putchar(uc);
		uc++;
	}

	putchar(n);
	return (0);
}
