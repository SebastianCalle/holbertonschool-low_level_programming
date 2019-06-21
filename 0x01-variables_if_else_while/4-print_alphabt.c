#include <stdio.h>
/**
 *main - prints the alphabet
 *Return: 0
*/
int main(void)
{
	char lc = 'a';
	char n = '\n';
	char e = 'e';
	char q = 'q';

	while (lc < 123)
	{
		if (lc == e || lc == q)
		{
			lc++;
		}
		putchar(lc);
		lc++;
	}
	putchar(n);
	return (0);
}
