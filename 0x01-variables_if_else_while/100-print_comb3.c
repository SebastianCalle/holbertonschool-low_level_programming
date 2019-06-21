#include <stdio.h>
/**
 *main - prints 0 to 10 numbers
 *Return: 0
*/
int main(void)
{
	int n;
	int i;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (n != i)
			{
				putchar(n);
				putchar(i);
				if (!(n == '9' && i == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
