#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random paswd
 * Return: 0
 */
int main(void)
{
	char paswd[62] = "abcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUWXYZ0123456789";
	int ran, sum, i;

	sum = 0;
	i = 0;
	srand(time(NULL));
	while (sum < 2772)
	{
		ran = random() % 100;
		if (ran > 20)
		{
			paswd[i] = ran;
			sum += ran;
			i++;
		}
	}
	paswd[i++] = (2772 - sum);
	paswd[i] = '\0';
	printf("%s", paswd);

	return (0);
}
