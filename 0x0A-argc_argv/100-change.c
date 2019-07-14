#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimu number of coins
 * @argc: number of arguments
 * @argv: array arguments
 * Return: 0 is is succesful or 1 is not
 */
int main(int argc, char *argv[])
{
	int coins[] = {1, 2, 5, 10, 25};
	int i, j, money;

	j = 5;
	i = 0;
	if (argc == 2)
	{
		money = atoi(argv[1]);
		while (money > 0)
		{
			if (money >= coins[j])
			{
				money -= coins[j];
				i++;
			}
			else
				j--;
		}
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
