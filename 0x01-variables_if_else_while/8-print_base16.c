#include <stdio.h>
/**
 *main - prints hexa numbers
 *Return: 0
*/
int main(void)
{
	char a = '0';
	char n = '\n';
	char b = 'a';

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}

	putchar(n);
	return (0);
}
