#include <stdio.h>
/**
 *main - prints the alphabet
 *Return: 0
*/
int main(void)
{
	char lc = 'z';
	char n = '\n';

	while (lc > 96)
	{
		putchar(lc);
		lc--;
	}
	putchar(n);
	return (0);
}
