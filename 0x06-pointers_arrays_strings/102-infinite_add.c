#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: string 1
 * @n2: string 2
 * @r: is the buffer
 * @size_r: is the buffer size
 * Return: return string add
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, i, j, k, l, m, sum, carry, num1, num2;

	l = k = carry =  0;
	i = strlen(n1);
	j = strlen(n2);
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0)
	{
		num1 = num2 = 0;
		num1 = n1[i--] - '0';
		if (j >= 0)
			num2 = n2[j--] - '0';
		sum = num1 + num2 + carry;
		if (sum > 9)
		{
			carry = 1;
			sum = sum - 10;
		}
		else
			carry = 0;
		r[k++] = (sum + '0');
	}
	if (carry == 1)
		r[k++] = (1 + '0');
	m = k;
	k = k - 1;
	for (l = 0; l < k; l++, k--)
	{
		num = r[k];
		r[k] = r[l];
		r[l] = num;
	}
	r[m] = '\0';
	return (r);
}
