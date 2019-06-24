#include "holberton.h"
/**
 * main - Show the last number
 * Return: 0
 */
int main(void)
{
	int i;
	char n[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
