#include <stdio.h>
/**
 *main - prints the alphabet
 *Return: 0
*/
int main(void)
{
	char lc = 'a';
	char n = '\n';

	while (lc < 123)
	{
		putchar(lc);
		lc++;
	}
	putchar(n);
	return (0);
}
