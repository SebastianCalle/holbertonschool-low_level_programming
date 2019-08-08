#include "holberton.h"
/**
 * _pow - potention to base 2
 * @n: recive num to potention
 * Return: the number of potention
 */
int _pow(unsigned int n)
{
	unsigned int i, sum = 1;

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
	unsigned int convert = 0, n = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '1' && b[i] != '0'))
			return (0);
	}
	i = i - 1;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			convert += _pow(n);
			n++;
			i--;
			continue;
		}
		i--;
		n++;
	}
	return (convert);
}
