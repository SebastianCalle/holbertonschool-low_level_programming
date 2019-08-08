#include "holberton.h"
/**
 * _pow - potention to base 2
 * @n: recive num to potention
 * Return: the number of potention
 */
int _pow(int n)
{
	int i, sum = 1;

	if (n == 0)
		return (1);
	for (i = 0; i < n; i++)
		sum *= 2;
	return (sum);
}
/**
 * binary_to_uint - converts a binary number
 * @b: char to convert
 * Return: the number convert or 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	int num[100];
	int i, j = 0, convert = 0, n = 0;

	if (*b == '\0')
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= 48 && b[i] <= 57)
		{
			num[i] = b[i] - '0';
		}
		else
			return (0);
	}
	i = i - 1;
	while (b[j])
	{
		if (num[i] == 1)
		{
			convert += _pow(n);
			n++;
			i--;
			j++;
			continue;
		}
		j++;
		i--;
		n++;
	}
	return (convert);
}
